#include "stdio.h"
#include "stdlib.h"

int ft_sqrt (int nb)
{
    int count_test = 1;
    while (count_test * count_test <= nb)
    {
        count_test ++;
    }

    count_test--;

    if (count_test*count_test == nb)
    {
        return count_test;
    }
    
    return 0;
}

int main(int argc, char **argv) 
{

    int nb = 78*78;
    int rslt = ft_sqrt(nb);
    int rslt_rec = ft_sqrt_recursive(nb);

    printf("reslt = %d\n", rslt);
    printf("reslt = %d\n", rslt_rec);

    return 0;
}