#include "stdio.h"
#include "stdlib.h"


int ft_is_prime (int nb)
{
    int count_test = 2;
    if (nb == 0 || nb == 1)
    {
        return 0;
    }
    
    while (count_test <= (nb/2))
    {
        if (nb % count_test == 0)
        {
            return 0;
        }
        count_test++;
    }
    
    return 1;
}


int main(int argc, char **argv) 
{
    int nb = 10;
    while (nb > 0)
    {
        if (ft_is_prime(nb))
        {
            printf("%d, ", nb);
        }     
        nb--;
    }
    
    return 0;
}