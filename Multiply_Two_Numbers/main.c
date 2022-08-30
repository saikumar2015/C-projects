#include <stdio.h>


int main()

{
    int a, b, product;     //integers

    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b);

    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point

    printf("Product = %d", product);
    return 0;
}


