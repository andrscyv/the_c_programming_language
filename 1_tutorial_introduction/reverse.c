#include <stdio.h>
#define MAX_LEN 40

int mygetline(char target[], int lim);
void reverse(char string[]);

int main()
{
    int current_line_len = 0;
    char current_line[MAX_LEN];
    while ((current_line_len = mygetline(current_line, MAX_LEN)) > 0)
    {
        if (current_line_len > 1)
        {
            reverse(current_line);
            printf("%s\n", current_line);
        }

    }

    return 0;

}

void reverse(char string[])
{
    int len = 0;
    while (string[len] != '\0')
        len++;

    // printf("%d\n", len);
    for (int i = 0; i < len/2; i++)
    {
        char temp = string[i];
        string[i] = string[len-1-i];
        string[len-1-i] = temp;
        // printf("%d: %c\n", i, string[i]);
        // printf("%d: %c\n", len-1-i, string[len-1-i]);
    }
    
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