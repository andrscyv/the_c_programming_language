#include <stdio.h>

int fhar_to_celcius(int f);

int main()
{
    int f = 0;
    for (f = 0; f <= 300; f+=20)
    {
        printf("%3d %46d \n", f, fhar_to_celcius(f));
    }
    
}

int fhar_to_celcius(int f)
{
    return 5*(f-32)/9;
}