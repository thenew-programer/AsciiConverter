#include "main.h"

void AsciiToWord(void)
{
    char A_number;
    int i;
    char *nameList;
    nameList = (char *) malloc(BUFFER * sizeof(char));
    // Prompt the user to his name in Ascii
    printf("Enter the Ascii numbers\n");
    printf("Enter (!) when you finish\n");
    while (A_number != 33)
    {
        printf("\n>Number [%d]: ", (i + 1));
        scanf("%hhd", &A_number);
        getchar();
        nameList[i] = A_number;
        i++;
    }
    nameList[i + 1] = '\0';

    // Print the name
    i = 0;
    printf("\n\n");
    printf("Name: ");
    while (nameList[i] != '!')
    {
        printf("%c", nameList[i]);
        i++;
    }
    putchar(10);
    putchar(10);
    free(nameList);
}
