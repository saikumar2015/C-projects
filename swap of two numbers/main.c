#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("enter a,b values:");
    scanf("%d %d",&a,&b);

    //swapping two values

    a = a*b;

    b = a/b;

    a = a/b;

    printf(" After swapping, a= %d b=%d \n",a,b);


    return 0;
}
