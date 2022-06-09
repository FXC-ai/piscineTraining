#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);
void ft_putchar_4c (char c1, char c2, char c3, char c4, char coma_check);

int main()
{
    ft_print_comb2();
    return 0;
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putchar_4c (char c1, char c2, char c3, char c4, char coma_check)
{
    ft_putchar(c1);
    ft_putchar(c2);
    ft_putchar(' ');
    ft_putchar(c3);
    ft_putchar(c4);
    if (coma_check == 0)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

}

void ft_print_comb2(void)
{
    char num_00 = '0';
    char coma_check = 0;

    while (num_00 <= '9')
    {
        char num_01 = '0';

        while (num_01 <= '9')
        {
            char num_02 = '0';

            while (num_02 <= '9')
            {

                char num_03 = '0';

                while (num_03 <= '9')
                {
                    if ((num_00 < num_02)||(num_00 == num_02 && num_01 < num_03))
                    {
                        if (num_00 == '9' && num_01 == '8' && num_02 == '9' && num_03 == '9')
                        {
                            coma_check = 1;
                        }
                        ft_putchar_4c(num_00, num_01, num_02, num_03, coma_check);
                    }
                    num_03 += 1;
                }

                num_02 += 1;
            }

            num_01 += 1;
        }

        num_00+=1;
    }
}
