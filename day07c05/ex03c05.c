#include "stdio.h"
#include "stdlib.h"

int ft_recursive_power (int nb, int power)
{
    if (power == 0)
    {
        return 1;
    }
    
    return nb * ft_recursive_power(nb, power-1);
}

int main(int argc, char **argv) 
{

    int nb = 2;
    int power = 10;
    int rslt = ft_recursive_power(nb, power);

    printf("reslt = %d\n", rslt);

    return 0;
}