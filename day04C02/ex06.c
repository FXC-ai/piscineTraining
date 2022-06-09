#include "stdio.h"
#include "stdlib.h"

int ft_str_is_printable(char *str)
{   
    int i = 0;
    
    int lenght_str = ft_strlen(str);
    
    while (str[i] != '\0') 
    {
        if ((str[i] >= 0 && str[i] <= 31 || str[i] == 127)) 
        {
            return 0;      
        }
        
        i += 1; 
    }
    
    return 1;
}


int main(int argc, char **argv) 
{
    char str[] = "";
    
    printf("%d", ft_str_is_printable(str));
    
    return 0;
}
