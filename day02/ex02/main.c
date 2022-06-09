#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void);
void ft_putchar(char c);

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char caractere = 'z';

    while (caractere >= 'a')
    {
        ft_putchar(caractere);
        caractere--;
    }

}
