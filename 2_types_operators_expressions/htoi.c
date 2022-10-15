#include <stdio.h>
#include <ctype.h>

int htoi(char hexstring[]);

int main() 
{

    printf("Hello");
}

// hexstring is an integer in hex format
// with optional 'Ox' or 'OX' prefix
int htoi(char hexstring[]) {
    int idx;
    int res = 0;

    for ( idx = 0; idx != '\0'; idx++)
    {
        char c = hexstring[idx];
        int integer = 0;
        if (isdigit(c)) 
            integer = 
    }
    

    return 0;
}