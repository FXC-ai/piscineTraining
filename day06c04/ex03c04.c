#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_atoi(char *str)
{

    int tab_nbr[100] = {0};
    int nbr_sign = 0;
    int minus_sign = 1;
    int nbr_digit = 0;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r' || *str == '\v')
        {
            if (nbr_digit != 0 || nbr_sign != 0){break;}
        }
        else if (*str == '-')
        {   
            nbr_sign ++;
            if (nbr_digit != 0)
            {
                break;
            }
            else
            {
                minus_sign = minus_sign*(-1);
            }
        }
        else if (*str == '+')
        {
            nbr_sign ++;
            if (nbr_digit != 0){break;} 
        }
        else if (*str >= '0' && *str <= '9')
        {
            tab_nbr[nbr_digit] = *str - 48;
            nbr_digit++;
        }
        else
        {
            break;
        }
        str++;
    }


    int i = 1;
    int divider = 1;
    int result = 0;

    while (i <= nbr_digit)
    {
        result += tab_nbr[nbr_digit - i] * divider;
        divider *= 10;
        i++;
    }

    result = result * minus_sign;

    return result;
}

int main(int argc, char **argv) 
{
    printf("Test fonction isspace : %d\n", isspace('\t'));

    char *str_test = "-----+1234ab567";

    printf("Test fonction atoi : %d\n", atoi(str_test));
    
    printf("resultat = %d\n", ft_atoi("    ----+---+1234ab567"));

    //ft_putnbr(nbr);

    return 0;
}