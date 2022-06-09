// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"

int ft_str_is_alpha(char *str)
{
    int lenght_str = ft_strlen(str);
    
    int i = 0;
    while (i < lenght_str) 
    {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))) 
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
    char str[] = "Te St";
    
    printf("%d", ft_str_is_alpha(str));
    
    return 0;
}
