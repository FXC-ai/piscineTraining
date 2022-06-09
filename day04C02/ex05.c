#include "stdio.h"
#include "stdlib.h"

int ft_str_is_uppercase(char *str)
{   
    int i = 0;
    while (str[i] != '\0') 
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z'))) 
        {
            return 0;      
        }
        
        i += 1; 
    }
    
    return 1;
}


int main(int argc, char **argv) 
{
    char str[] = "PTDR";
    
    printf("%d", ft_str_is_uppercase(str));
    
    return 0;
}
