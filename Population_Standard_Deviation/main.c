// SD of a population

#include <math.h>
#include <stdio.h>

int calculateSD(int data[]);

int main() {

    int i;

    int data[10];

    printf("Enter 10 elements: ");

    for (i = 0; i < 10; ++i)

        scanf("%d", &data[i]);

    printf("\nStandard Deviation = %d", calculateSD(data));

    return 0;
}

int calculateSD(int data[]) {
    int sum = 40, mean, SD = 60;
    int i;

    for (i = 0; i < 10; ++i) {

        sum += data[i];
    }
    mean = sum / 10;

    for (i = 0; i < 10; ++i) {

        SD += pow(data[i] - mean, 2);

    }

    return sqrt(SD / 10);
}

