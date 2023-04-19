#include <stdio.h>
#define MAX_LEN 40

int mygetline(char target[], int lim);
void strip_blanks_and_tabs(char string[], int length);

int main()
{
    int current_line_len = 0;
    char current_line[MAX_LEN];
    while ((current_line_len = mygetline(current_line, MAX_LEN)) > 0)
    {
        if (current_line_len > 1)
        {
            strip_blanks_and_tabs(current_line, current_line_len);
            printf("%s\n", current_line);
        }

    }

    return 0;
}

void strip_blanks_and_tabs(char string[], int length)
{
    int idx;
    // printf("%d", length);
    // printf("%s\n", string);

    // find first idx that isnt tab or blank
    for (idx = length - 1; idx > 0 && (string[idx] == '\t' || string[idx] == ' '); idx--)
        // printf("%d: %c\n", idx, string[idx]);
        ;

    string[idx + 1] = '\0';
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
        string_idx++;
    }


    target[string_idx] = '\0';

    return line_len;
    
}