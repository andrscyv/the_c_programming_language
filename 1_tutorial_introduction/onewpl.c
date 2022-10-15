#include <stdio.h>

int main()
{
    int c, inword;
    inword = 0;

    while ((c = getchar()) != EOF)
    {

        if (c != ' ' && c != '\t')
        {
            putchar(c);
            inword = 1;
        } else if (inword)
        {
            putchar('\n');
            inword = 0;
        }

    }
}