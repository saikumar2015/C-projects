#include <stdio.h>
#include <stdlib.h>

int main()
{
    char S;

    printf("Enter a character: ");

    scanf("%c", &S);

    if (('s' >= 'a' && 's' <= 'z') || ('S' >= 'A' && 'S' <= 'Z'))

        printf("%c is an alphabet.", S);

    else

        printf("%c is not an alphabet.", S);

    return 0;
}
