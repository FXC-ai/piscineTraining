#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);

int main()
{

    ft_putchar('K');

    return 0;
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}
