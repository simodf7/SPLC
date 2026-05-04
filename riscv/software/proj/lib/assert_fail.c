#include "system.h"

void __assert_func(const char *file, int line, const char *func, const char *statement)
{
    printf("Assertion failed: \"%s\", file %s, function %s, line %u\n",
        statement, file, func, line);
    halt();
    __builtin_unreachable();
}