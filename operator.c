// addition        +
// subtraction     -
// multiplication  *
// division        /
// modulus         %
// increment       ++
// decrement       --
#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result;

    result = a + b;
    printf("a + b = %d", result);

    result = b - a;
    printf("\nb - a = %d", result);

    result = a * b;
    printf("\na * b = %d", result);

    result = b / a;
    printf("\nb / a = %d", result);

    result = b % a;
    printf("\nb %% a = %d", result);

    result = ++a;
    printf("\na++ = %d", result);

    result = --a;

    printf("\na-- = %d", result);

    return 0;   
}