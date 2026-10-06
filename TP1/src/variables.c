#include <stdio.h>

int main(void)
{
    signed char signed_char_value = -42;
    unsigned char unsigned_char_value = 42;
    signed short signed_short_value = -1200;
    unsigned short unsigned_short_value = 1200;
    signed int signed_int_value = -16000;
    unsigned int unsigned_int_value = 16000;
    signed long int signed_long_value = -32000L;
    unsigned long int unsigned_long_value = 32000UL;
    signed long long int signed_long_long_value = -64000LL;
    unsigned long long int unsigned_long_long_value = 64000ULL;
    float float_value = 3.14f;
    double double_value = 2.718281828;
    long double long_double_value = 1.618033988749895L;

    printf("signed char: %d\n", signed_char_value);
    printf("unsigned char: %u\n", (unsigned int)unsigned_char_value);
    printf("signed short: %hd\n", signed_short_value);
    printf("unsigned short: %hu\n", unsigned_short_value);
    printf("signed int: %d\n", signed_int_value);
    printf("unsigned int: %u\n", unsigned_int_value);
    printf("signed long int: %ld\n", signed_long_value);
    printf("unsigned long int: %lu\n", unsigned_long_value);
    printf("signed long long int: %lld\n", signed_long_long_value);
    printf("unsigned long long int: %llu\n", unsigned_long_long_value);
    printf("float: %f\n", float_value);
    printf("double: %lf\n", double_value);
    printf("long double: %Lf\n", long_double_value);

    return 0;
}
