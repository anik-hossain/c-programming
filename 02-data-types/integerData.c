#include <stdio.h>

int main()
{
    // Signed Data

    // Short - %d, %hi
    short a = 26;
    printf("hello it's short and the value is - %hi\n", a);

    // Int - %d, %i
    int b = 2600;
    printf("hello it's int and the value is - %d\n", b);

    // Long - %ld, %li
    long c = 4500l;
    printf("hello it's long and the value is - %ld\n", c);

    // Long Long - %lld, %lli
    long long d = 1234ll;
    printf("hello it's long long and the value is - %lld\n", d);

    // Octal int - %o
    int o = 0756;
    printf("hello it's octal and the value is - %o\n", o);

    // Hexadecimal - %x, %X
    int h = 0xfff;
    printf("hello it's hexadecimal and the value is - %x\n", h);

    return 0;
}
