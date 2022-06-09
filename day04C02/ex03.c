#include "stdio.h"
#include "stdlib.h"

int ft_str_is_numeric(char *str)
{
    int lenght_str = ft_strlen(str);
    
    int i = 0;
    while (i < lenght_str) 
    {
        if (!((str[i] >= 48 && str[i] <= 57))) 
        {
            return 0;      
        }
        
        i += 1; 
    }
    
    return 1;
}

int ft_strlen(char *str) 
{
    int c = 0;
    
    while (str[c] != '\0') 
    {    
        c += 1;
    }
    
    return c;
}

int main(int argc, char **argv) 
{
    char str[] = "98979879875421234567898798";
    
    printf("%d", ft_str_is_numeric(str));
    
    return 0;
}