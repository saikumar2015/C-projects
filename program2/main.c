#include <stdio.h>
#include <stdlib.h>

int main()
{
    float meter, feet;

    printf("Enter a feet:");

    scanf("%f",&feet);

    meter = feet / 15.000000;

    printf("meter: %f",meter);

    return 0;
}
