#include <stdio.h>

int main()
{
    float a, b;

    printf("Please enter two numbers(eg. 26, 4.5): ");

    // Get Input
    scanf("%f %f", &a, &b);

    // Calculate & print the result
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\a", a, b, a / b);
    return 0;
}
