#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_iterative_factorial (int nb)
{
    int result = 1;

    if (nb < 0 || nb > 32767)
    {
        return 0;
    }
    
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }

    return result;
}

int main(int argc, char **argv) 
{

    int nb = 12;
    int rslt = ft_iterative_factorial(nb);

    printf("reslt = %d\n", rslt);

    return 0;
}