#include "stdio.h"
#include "stdlib.h"

int ft_sqrt (int nb)
{
    int count_test = 1;
    while (count_test * count_test <= nb)
    {
        count_test ++;
    }

    //printf("R = %d\n", count_test);
    count_test--;

    if (count_test*count_test == nb)
    {
        return count_test;
    }
    
    return 0;
}

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


int ft_find_next_prime (int nb)
{
    if (ft_is_prime(nb))
    {
        return nb;
    }

    while (ft_is_prime(nb) == 0)
    {
        nb++;
    }

    return nb;
}

int ft_find_next_prime_recursive (int nb)
{
    if (ft_is_prime(nb))
    {
        return nb;
    }

    nb++;

    return ft_find_next_prime_recursive(nb);
}


int main(int argc, char **argv) 
{

    int nb = 10000;

    int rslt = ft_find_next_prime_recursive(nb);

    printf("%d", rslt);
    
    return 0;
}