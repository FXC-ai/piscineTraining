#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>


void ft_print_params (int nbr_params, char **params)
{

    int i = 1;
    char line_jump = '\n';
    while (i < nbr_params)
    {
        while (*params[i] != '\0')
        {
            write(1, params[i], 1);
            params[i]++;
        }

        write(1, &line_jump,1 );
        
        i++;
    }
    
}

int main(int argc, char **argv) 
{

    ft_print_params(argc, argv);
    
  
    return 0;
}