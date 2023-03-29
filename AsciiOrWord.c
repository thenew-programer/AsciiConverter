#include "main.h"

char AsciiOrWord(void)
{
    char chr;
    printf("(A) Ascii to words\n(B) Words to Ascii\n");
    scanf("%c", &chr);
    getchar();
    return (chr);
}
