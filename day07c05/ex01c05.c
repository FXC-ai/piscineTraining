#include "stdio.h"
#include "stdlib.h"

int ft_recursive_factorial (int nb)
{
    if (nb < 0 || nb > 32767)
    {
        return 0;
    }
    
    if (nb == 0)
    {
        return 1; 
    }

    return nb * ft_recursive_factorial(nb - 1);
}


int main(int argc, char **argv) 
{

    int nb = 5;
    int rslt = ft_recursive_factorial(nb);

    printf("reslt = %d\n", rslt);

    return 0;
}