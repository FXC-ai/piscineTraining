#include "stdio.h"
#include "stdlib.h"

int ft_str_is_lowercase(char *str)
{   
    int i = 0;
    while (str[i] != '\0') 
    {
        if (!((str[i] >= 'a' && str[i] <= 'z'))) 
        {
            return 0;      
        }
        
        i += 1; 
    }
    
    return 1;
}


int main(int argc, char **argv) 
{
    char str[] = "tch-uoum";
    
    printf("%d", ft_str_is_lowercase(str));
    
    return 0;
}
