#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2;

    int add,sub,multi,mod;

    float div;

    printf("Enter a number1:");

    scanf("%d",&number1);

    printf("Enter a number2:");

    scanf("%d",&number2);

    add = number1 + number2;

    sub = number1 - number2;

    multi = number1 * number2;

    mod = number1 % number2;

    div = (float)number1 / number2;

    printf("addition of number1 and number2 = %d\n",add);

    printf("subtraction of number1 and number2 = %d\n",sub);

    printf("multiplication of number1 and number2 = %d\n",multi);

    printf("module of number1 and number2= %d\n",mod);

    printf("division of number1 and number2= %.2f\n",div);

    return 0;
}
