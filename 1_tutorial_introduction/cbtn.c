#include <stdio.h>

int main()
{
    long blank_count = 0, tab_count = 0, newline_count = 0;
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            newline_count++;
        else if (c == ' ')
            blank_count++;
        else if (c == '\t')
            tab_count++;
    }
    printf("b: %3ld\n", blank_count);
    printf("t: %3ld\n", tab_count);
    printf("n: %3ld\n", newline_count);

}