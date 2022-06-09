#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void ft_print_alphabet(void);


int main()
{

    ft_print_alphabet();

    return 0;
}

void ft_print_alphabet(void)
{
    write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}
