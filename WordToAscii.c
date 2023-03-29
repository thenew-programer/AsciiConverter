#include "main.h"

void WordToAscii(void)
{
    int i;
    char name[BUFFER];
    printf("Enter you name: ");
    fgets(name, BUFFER, stdin);
    name[strlen(name) - 1] = 0;

    printf("\n\n");
    printf("ASCII: ");
    for (i = 0; i < strlen(name); i++)
    {
        printf("%hhd ", name[i]);
    }
    putchar(10);
    putchar(10);
}
