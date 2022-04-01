#include <stdio.h>

/*** There is a 2 type of constant declearation in this language ***/

// 1.
#define FIRST 26

// 2.
const int SECOND = 45;

int main()
{
    printf("%d\n", FIRST);
    printf("%d\n", SECOND);
    return 0;
}
