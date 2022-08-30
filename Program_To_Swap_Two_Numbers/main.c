#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, temp;
  printf("Enter number1: ");

  scanf("%d", &number1);

  printf("Enter number2: ");

  scanf("%d", &number2);

  // value of first is assigned to temp
  temp = number1;

  // value of second is assigned to first
  number1 = number2;

  // value of temp (initial value of first) is assigned to second
  number2 = temp;

  // %%d displays integer values
  printf("\nAfter swapping, number1 = %d\n", number1);

  printf("After swapping, number2 = %d", number2);

    return 0;
}
