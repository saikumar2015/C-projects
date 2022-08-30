#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

  int count = 0;

  printf("Enter an integer: ");

  scanf("%d", &n);

  // iterate at least once, then until n becomes 0
  // remove last digit from n in each iteration
  // increase count by 1 in each iteration
  do {

    n /= 10;

    ++count;

  } while (n != 0);

  printf("Number of digits: %d", count);

    return 0;
}
