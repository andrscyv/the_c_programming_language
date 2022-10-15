#include <stdio.h>
#define FREQ_TABLE_LEN 40

int main()
{
    int freq[FREQ_TABLE_LEN];

    for (int i = 0; i < FREQ_TABLE_LEN; i++)
    {
        freq[i] = 0;
    }

    int c, wordl = 0, inword;

    while ((c = getchar()) != EOF) 
    {
        // printf("char %c\n", (char)c);
        if (c != ' ' && c != '\t' && c != '\n')
        {
            wordl++;
            inword = 1;
        } else if (inword) //finished streaming one word
        {
            inword = 0;
            if (wordl <= FREQ_TABLE_LEN) 
                freq[wordl - 1]++;
            wordl = 0;
        }
        // printf("wordl %d\n", wordl);
        // printf("inword %d\n", inword);
        // printf("---\n\n\n");

    }

    if (inword && wordl > 0 && wordl <= FREQ_TABLE_LEN) 
    {
        freq[wordl - 1]++;
    }
    for (int i = 0; i < FREQ_TABLE_LEN; i++)
    {
        printf("%2d  - > ", i + 1);
        for (int k = 0; k <= freq[i] - 1; k++)  
            printf("|");

        printf("\n");
    }
    
    
}