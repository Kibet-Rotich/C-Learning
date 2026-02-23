#include <stdio.h>
#include <limits.h>   // for integer type limits
#include <float.h>    // for floating point limits

int main(void) {
    printf("Ranges of basic data types:\n\n");

    // char
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: 0 to %u\n\n", UCHAR_MAX);

    // short
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n\n", USHRT_MAX);

    // int
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n\n", UINT_MAX);

    // long
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n\n", ULONG_MAX);

    // long long (optional, but useful)
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: 0 to %llu\n\n", ULLONG_MAX);

    // floating point types
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}

