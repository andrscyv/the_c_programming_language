#include <stdio.h>
#define MAX_LEN 100
#define PRINT_THRESHOLD 3 

int mygetline(char target[], int lim);

int main()
{
    int current_line_len = 0;
    char current_line[MAX_LEN];
    while ((current_line_len = mygetline(current_line, MAX_LEN)) > 0)
    {
        if (current_line_len > PRINT_THRESHOLD)
        {
            printf("%s\n", current_line);
        }

    }

    return 0;
}

int mygetline(char target[], int lim)
{
    int c;
    int string_idx = 0;
    int line_len = 0;

    while (((c = getchar()) != EOF) && c != '\n')
    {
        line_len++;
        if (string_idx < lim-1)
        {
            target[string_idx] = c;
            string_idx++;
        }
    }

    if (string_idx < lim-1 && c == '\n' )
    {
        target[string_idx] = '\n';
    }


    target[string_idx] = '\0';

    return line_len;
    
}