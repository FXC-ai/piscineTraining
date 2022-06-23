#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>




void ft_print_program_name (char *argv0)
{

    while (*argv0 != '\0')
    {
        write(1, argv0++, 1);

    }
    
}

int main(int argc, char **argv) 
{

    ft_print_program_name(argv[0]);
  
    return 0;
}