// Code file created by C Code Develop

#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

int ft_char_is_printable(char c)
{   
    if ((c >= 0 && c <= 31 || c == 127)) 
    {
        return 0;      
    }
    
    return 1;
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
    {
        int is_printable = ft_char_is_printable(str[i]);
        //printf("%d", is_printable);
        if (is_printable == 1) 
        {
            write(1, &str[i], 1);
        }
        else if(is_printable == 0) 
        {
            char *unit_hexa = "0123456789abcdef";
            char separator = '\\';
            char c_0 = unit_hexa[str[i] / 16];
            char c_1 = unit_hexa[str[i] % 16];
            
            write(1, &separator, 1);
            write(1, &c_0, 1);
            write(1, &c_1, 1);

            printf("str[i] = %d et c0 = %d et c1 = %d", str[i], c_0, c_1);

            //printf("\\%.2x", str[i]);
        }        
        i += 1;
    }  
}

int main(int argc, char **argv) 
{
    char *chainTest = "Coucou\ntu vas bien ?";
    //printf("%s\n", chainTest);
    ft_putstr_non_printable(chainTest);
    
    //printf("%c : %d : %.8x \n", 'q', 'q', 'q');
    
    //int result = ft_char_is_printable('e');
    
    //printf("%d", result);
    
    return 0;
}