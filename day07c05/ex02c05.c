#include "stdio.h"
#include "stdlib.h"

int ft_iterative_power (int nb, int power)
{
    int result = 1;

    if (power < 0)
    {
        return 0;
    }
    
    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}

int main(int argc, char **argv) 
{

    int nb = 2;
    int power = 8;
    int rslt = ft_iterative_power(nb, power);

    printf("reslt = %d\n", rslt);

    return 0;
}