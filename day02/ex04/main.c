#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_is_negative(int n);

int main()
{
    ft_is_negative(0);
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else if (n >= 0)
    {
        ft_putchar('P');
    }

}
