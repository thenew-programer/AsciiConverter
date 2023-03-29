#include "main.h"

int main(void)
{
    // Ask the user if he wants to converts from Ascii to words or the inverse
    char answer;
    answer = AsciiOrWord();

    // check what the user wants
    if (answer == 'a' || answer == 'A')
    {
        AsciiToWord();
    }
    else if (answer == 'b' || answer == 'B')
    {
        WordToAscii();
    }
    else
    {
        printf("Please enter the right choice!!!\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}
