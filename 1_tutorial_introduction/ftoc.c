#include <stdio.h>

main()
{
    int f = 0;
    for (f = 0; f <= 300; f+=20)
    {
        int c = 5*(f-32)/9;
        printf("%3d %46d \n", f, c);
    }
    
}