#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,n;

   printf("Enter Two Numbers:");

   scanf("%d %d",&n1,&n2);

   n = n1;

   n1 = n2;

   n2 = n;

   printf("After Swapping n1 = %d\n",n1);

   printf("After Swapping n2 = %d\n",n2);

    return 0;
}
