#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>


void ft_print_comb_temp(void);
void ft_print_comb(void);
void ft_putchar(char c);

int main()
{
    printf("Fonction 00 :\n");
    ft_print_comb_temp();
    printf("\nFonction 01 :\n");
    ft_print_comb();
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb_temp(void)
{

    int digit_00 = 0;

    while (digit_00 <= 9)
    {
        int digit_01 = 0;

        while (digit_01 <= 9)
        {
            int digit_02 = 0;
            while (digit_02 <= 9)
            {
                //printf("%d%d%d, ", digit_00, digit_01, digit_02);

                if (digit_00 < digit_01 && digit_01 < digit_02)
                {
                    printf("%d%d%d, ", digit_00, digit_01, digit_02);
                }
                digit_02+=1;
            }
            digit_01+=1;
        }
        digit_00 +=1;
    }
}

void ft_print_comb(void)
{
    char num_00 = '0';

    while (num_00 <= '9')
    {
        char num_01 = '0';

        while (num_01 <= '9')
        {
            char num_02 = '0';

            while (num_02 <= '9')
            {
                if (num_00 < num_01 && num_01 < num_02)
                {
                    ft_putchar(num_00);
                    ft_putchar(num_01);
                    ft_putchar(num_02);
                    if (!(num_00 == '7' && num_01 == '8' && num_02 == '9'))
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                num_02 += 1;
            }

            num_01 += 1;
        }

        num_00+=1;
    }
}
