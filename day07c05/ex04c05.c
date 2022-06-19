#include "stdio.h"
#include "stdlib.h"

int ft_fibonacci (int index)
{

    if (index < 0)
    {
        return -1;
    }
    
    if (index == 0)
    {
        return 0;
    }

    if (index == 1 || index == 2)
    {
        return 1;
    }

    return ft_fibonacci(index-2) + ft_fibonacci(index -1);
    

}

int ft_fibonacci_iter (int index)
{
    if (index == 0)
    {
        return 0;
    }

    int result_prec = 0;
    int result = 1;
    int result_temp;

    while (index > 0)
    {
        printf("r = %d\n", result);
        result_temp = result;
        result =  result_prec + result;
        result_prec = result_temp;
        index--;
    }
    
    return result;
}

int main(int argc, char **argv) 
{

    int index = 5;
    int rslt = ft_fibonacci(index);

    printf("reslt = %d\n", rslt);

    return 0;
}