#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0')
	    c += 1;
	return c;
}

int ft_is_negativ (int value)
{
    if (value < 0)
    {
        return 1;
    }
    return 0;
}

int ft_base_valid_uniq(char *base)
{
    char *base_ini = base;
    int i = 1;

    while (*base != '\0')
    {
        char *base_temp = base_ini + i;
        while (*base_temp != '\0')
        {
            if (*base_temp == *base)
            {
                return 0;
            }
            
            base_temp++;
        }
        
        base++;
        i++;
    }
    return 1;
}

int ft_base_valid_len(char *base)
{
    if (ft_strlen(base)<=1)
    {   
        return 0;
    }
    return 1;
}

int ft_base_valid_caract(char *base)
{
    while (*base != '\0')
    {
        if (!((*base >= '0' && *base<= '9') || 
            (*base >= 'a' && *base<= 'z') || 
            (*base >= 'A' && *base<= 'Z')) )
        {
            return 0;
        }
        base++;
    }
    return 1;
}


void ft_putnbr_base(int nbr, char *base)
{
    int nbr_ini = nbr;
    char result[1000000];
    int mod = 0;
    int lenbase = ft_strlen(base);
    int is_negativ = ft_is_negativ(nbr);
    int valid_len = ft_base_valid_len(base);
    int valid_uniq = ft_base_valid_uniq(base);
    int valid_caract = ft_base_valid_caract(base);

    int validation = valid_len + valid_uniq + valid_caract;

    if (validation == 3)
    {
        int i = 0;
        if (is_negativ == 1)
        {
            nbr = nbr * (-1);
        }

        while (nbr > 0)
        {   
            mod = nbr % lenbase;
            nbr = nbr / lenbase;
            char c = base[mod];
            result[i] = c;
            i++;
        }

        if (is_negativ == 1)
        {
            result[i] = '-';
            i++;
            result[i] = '\0';
        }
        else
        {
            result[i] = '\0';
        }
        
        i--;
        while (i >= 0)
        {
            ft_putchar(result[i]);
            i--;
        }
    }
}


int main(int argc, char **argv) 
{

    char *base = "ab";
    
    printf("Retour ft_uniq = %d\n", ft_base_valid_uniq(base));
    printf("Retour ft_len = %d\n", ft_base_valid_len(base));
    printf("Retour ft_caract = %d\n", ft_base_valid_caract(base));
    ft_putnbr_base(-2147483647, base);
    printf("INT_MIN = %d\n", INT32_MAX);

    return 0;
}