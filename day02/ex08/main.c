#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void ft_print_combn(int n);
void ft_putchar(char c);
void ft_putcharn(int nbOfc, ...);

int main()
{

    ft_print_combn(5);
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{

    char num_00 = '0';
    while (num_00 <= '9')
    {
        if (n==1)
        {
            ft_putchar(num_00);
            ft_putchar(',');
        }
        char num_01 = '0';
        while (num_01 <= '9')
        {
            if (n==2 && num_00 < num_01)
            {
                ft_putchar(num_00);
                ft_putchar(num_01);
                ft_putchar(',');
            }

            char num_02 = '0';
            while (num_02 <= '9')
            {
                if (n==3 && num_00 < num_01 && num_01 < num_02)
                {
                    ft_putchar(num_00);
                    ft_putchar(num_01);
                    ft_putchar(num_02);
                    ft_putchar(',');
                }
                char num_03 = '0';
                while (num_03 <= '9')
                {
                    if (n==4 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03)
                    {
                        ft_putchar(num_00);
                        ft_putchar(num_01);
                        ft_putchar(num_02);
                        ft_putchar(num_03);
                        ft_putchar(',');
                    }

                    char num_04 = '0';
                    while(num_04 <= '9')
                    {
                        if (n==5 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03 && num_03 < num_04)
                        {
                            ft_putchar(num_00);
                            ft_putchar(num_01);
                            ft_putchar(num_02);
                            ft_putchar(num_03);
                            ft_putchar(num_04);
                            ft_putchar(',');
                        }

                        char num_05 = '0';
                        while (num_05 <= '9')
                        {
                            if (n==6 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03 && num_03 < num_04 && num_04 < num_05)
                            {
                                ft_putchar(num_00);
                                ft_putchar(num_01);
                                ft_putchar(num_02);
                                ft_putchar(num_03);
                                ft_putchar(num_04);
                                ft_putchar(num_05);
                                ft_putchar(',');
                            }
                            char num_06 = '0';
                            while (num_06 <= '9')
                            {
                                if (n==7 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03 && num_03 < num_04 && num_04 < num_05 && num_05 < num_06)
                                {
                                    ft_putchar(num_00);
                                    ft_putchar(num_01);
                                    ft_putchar(num_02);
                                    ft_putchar(num_03);
                                    ft_putchar(num_04);
                                    ft_putchar(num_05);
                                    ft_putchar(num_06);
                                    ft_putchar(',');
                                }
                                char num_07 = '0';
                                while (num_07 <= '9')
                                {
                                    if (n==8 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03 && num_03 < num_04 && num_04 < num_05 && num_05 < num_06 && num_06 < num_07)
                                    {
                                        ft_putchar(num_00);
                                        ft_putchar(num_01);
                                        ft_putchar(num_02);
                                        ft_putchar(num_03);
                                        ft_putchar(num_04);
                                        ft_putchar(num_05);
                                        ft_putchar(num_06);
                                        ft_putchar(num_07);
                                        ft_putchar(',');
                                    }
                                    char num_08 = '0';
                                    while (num_08 <= '9')
                                    {
                                        if (n==9 && num_00 < num_01 && num_01 < num_02 && num_02 < num_03 && num_03 < num_04 && num_04 < num_05 && num_05 < num_06 && num_06 < num_07 && num_07 < num_08)
                                        {
                                            ft_putchar(num_00);
                                            ft_putchar(num_01);
                                            ft_putchar(num_02);
                                            ft_putchar(num_03);
                                            ft_putchar(num_04);
                                            ft_putchar(num_05);
                                            ft_putchar(num_06);
                                            ft_putchar(num_07);
                                            ft_putchar(num_08);
                                            ft_putchar(',');
                                        }
                                        num_08 +=1;
                                    }
                                    num_07 += 1;
                                }
                                num_06+=1;
                            }
                            num_05 +=1;
                        }
                        num_04 +=1;
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
