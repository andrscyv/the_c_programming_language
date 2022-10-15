#include <stdio.h>

int main()
{
    int c;
    int seenb = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            seenb = 0;
        } else if (!seenb){
            putchar(c);
            seenb = 1;
        }
    }
}