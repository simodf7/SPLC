import json
import sys
import hmac
import hashlib

def load_json(filename):
    try:
        with open(filename, "r") as f:
            data = json.load(f)
        
        # Ensure the JSON contains a valid object
        if not isinstance(data, dict):
            raise ValueError("The JSON file does not contain a valid object.")
        
        # Check for required keys
        if "manufacturer_sign_key" not in data or "device_root_key" not in data or "device_mud_url" not in data:
            raise ValueError("The JSON file must contain 'manufacturer_sign_key', 'device_root_key', and 'device_mud_url'.")
        
        # Ensure the keys 'manufacturer_sign_key' and 'device_root_key' are lists
        if not isinstance(data["manufacturer_sign_key"], list) or not isinstance(data["device_root_key"], list):
            raise ValueError("'manufacturer_sign_key' and 'device_root_key' must be arrays of numbers.")
        
        # Ensure the lists have exactly 32 elements
        if len(data["manufacturer_sign_key"]) != 32 or len(data["device_root_key"]) != 32:
            raise ValueError("The arrays must have exactly 32 elements.")
        
        # Validate that all elements in the arrays are integers between 0 and 255
        if not all(isinstance(x, int) and 0 <= x <= 255 for x in data["manufacturer_sign_key"] + data["device_root_key"]):
            raise ValueError("The arrays must contain only integer numbers between 0 and 255.")
        
        # Ensure 'device_mud_url' is a string of at most 128 characters
        if not isinstance(data["device_mud_url"], str) or len(data["device_mud_url"]) > 128:
            raise ValueError("'device_mud_url' must be a string with a maximum length of 128 characters.")
        
        return data
    except (json.JSONDecodeError, ValueError) as e:
        sys.exit(f"Error in JSON file: {e}")

def sign_file(file1, key):
    try:
        with open(file1, "rb+") as f:
            content = f.read()
            
            # Ensure the binary file has at least 32 bytes
            if len(content) < 32:
                sys.exit("The binary file must be at least 32 bytes long.")
            
            # Compute the HMAC-SHA256 signature and write it at the beginning of the file
            signature = hmac.new(bytes(key), content[32:], hashlib.sha256).digest()
            f.seek(0)
            f.write(signature)
    except IOError as e:
        sys.exit(f"Error accessing the binary file: {e}")

def generate_c_file(json_data, filename):
    try:
        with open(filename, "w") as f:
            f.write(f"#include <stdint.h>\n\n")
            
            # Define the 'manufacturer_sign_key' array
            f.write("const unsigned char manufacturer_sign_key[32] = {")
            f.write(", ".join(map(str, json_data["manufacturer_sign_key"])))
            f.write("};\n")
            
            # Define the 'device_root_key' array
            f.write("const unsigned char device_root_key[32] = {")
            f.write(", ".join(map(str, json_data["device_root_key"])))
            f.write("};\n")
            
            # Define the 'device_mud_url' string
            f.write(f"const char device_mud_url[128] = \"{json_data['device_mud_url']}\";\n")
        
    except IOError as e:
        sys.exit(f"Error accessing the C file: {e}")

def main():
    # Check the correct usage of the script
    if len(sys.argv) != 4 or sys.argv[2] != "-c":
        sys.exit("Correct usage: python3 script.py file1 -c file2")
    
    file1, file2 = sys.argv[1], sys.argv[3]
    
    # Load the JSON data
    json_data = load_json(file2)
    
    # Apply HMAC-SHA256 signature to the binary file
    sign_file(file1, json_data["manufacturer_sign_key"])
    
    # Create the C filename by replacing the extension with '.c'
    c_filename = file2.rsplit('/', 1)[-1].rsplit('.', 1)[0] + ".c"
    
    # Generate the C file with the extracted data
    generate_c_file(json_data, c_filename)
    
    print(f"C file successfully generated: {c_filename}")
    print("HMAC-SHA256 signature successfully applied.")

if __name__ == "__main__":
    main()
