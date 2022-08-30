#include <stdio.h>

int main()

{
    int number1, number2;

    float result;

    printf("Enter the First Number to find =");
    scanf("%d",&number1);

    printf("Enter the Second Number to find = ");
    scanf("%d",&number2);

    int sum = number1 + number2;

    result = sum/2; //(float)sum/2;

    printf("The Sum of %d and %d  = %d\n", number1, number2, sum);

    printf("The Average of %d and %d = %.2f\n", number1, number2, result);

    return 0;
}
