// Print histogram of alphabetical chars in input
#include <stdio.h>
#define FREQ_TABLE_LEN 26

int main()
{
    int freq_table[FREQ_TABLE_LEN];

    for (int i = 0; i < FREQ_TABLE_LEN; i++)
    {
        freq_table[i] = 0;
    }

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            freq_table[c - 'a']++;
        }
    }

    for (int i = 0; i < FREQ_TABLE_LEN; i++)
    {
        printf("%c: %d\n", (char)('a' + i ), freq_table[i]);
    }
    

}