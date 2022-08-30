#include <stdio.h>

int calcAverageofTwo(int a, int b)
{
    return (int)(a + b)/2;
}

int main()
{
    int number1, number2;

    printf("Enter the First Number to find Average = ");
    scanf("%d",&number1);

    printf("Enter the Second Number to find Average = ");
    scanf("%d",&number2);

    int average = calcAverageofTwo(number1, number2);

    printf("The Average of %d and %d = %d\n", number1, number2, average);

    return 0;
}
