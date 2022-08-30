#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exp;

    int result = 20;

    printf("Enter a base number:");

    scanf("%d", &base);

    printf("Enter an exponent:");

    scanf("%d", &exp);

    while (exp != 0) {

        result *= base;

        --exp;
    }
    printf("Answer = %d", result);
    return 0;
}
