#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <stdbool.h>

void ft_swap(char *tabToSwap[], int ind_0, int ind_1)
{
    char *t;
    t = tabToSwap[ind_0];
    tabToSwap[ind_0] = tabToSwap[ind_1];
    tabToSwap[ind_1] = t;
}

void ft_sort_params (int nbr_params, char **tabToSwap)
{

    bool check_swap = true;
    while (check_swap == true)
    {
        int i = 1;
        check_swap = false;

        while (i < (nbr_params-1))
        {            
            int c = 0;
            while (*(tabToSwap[i] + c) == *(tabToSwap[i+1] + c) 
                    && *(tabToSwap[i] + c) != '\0' 
                    && *(tabToSwap[i+1] + c) != '\0')
            {
                c++;
            }
            if (*(tabToSwap[i] + c) > *(tabToSwap[i+1] + c))
            {
                ft_swap(tabToSwap, i, (i+1));
                check_swap = true;
            }
            i++;
        }
    }
}



int main(int argc, char **argv) 
{

    if (argc != 1)
    {
        ft_sort_params(argc, argv);
        
        char jump_line = '\n';
        int j = 0;
        while (j < argc)
        {
            while (*argv[j] != '\0')
            {
                write (1, argv[j], 1);
                argv[j]++;
            }
            write (1,&jump_line,1);
            j++;
        }
    }
    return 0;
}