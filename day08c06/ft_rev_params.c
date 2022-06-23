#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

void ft_rev_params (int nbr_params, char **params)
{

    char line_jump = '\n';

    nbr_params--;

    while (nbr_params > 0)
    {
        while (*params[nbr_params] != '\0')
        {
            write(1, params[nbr_params], 1);
            params[nbr_params]++;
        }

        write(1, &line_jump,1 );
        
        nbr_params--;
    }
    
}

int main(int argc, char **argv) 
{
    ft_rev_params(argc, argv);
    return 0;
}