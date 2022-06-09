#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
int lenght_nb(int nb);

int main()
{
    ft_putnbr(24021988);
    return 0;
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

int lenght_nb(int nb)
{
    int lenght = 0;
    int temp = 1;

    while (temp != 0)
    {
        temp = nb / 10;
        nb = temp;
        lenght+=1;
    }

    return lenght;

}

void ft_putnbr(int nb)
{

    int len = lenght_nb(nb);

    int divider = 1;

    while (len != 1)
    {
        divider*= 10;
        len-=1;
    }

    while (divider != 0)
    {
        int c = nb / divider;
        nb = nb - (divider*c);
        ft_putchar(c + '0');
        divider /= 10;
    }
}
