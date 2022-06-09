#include "stdio.h"
#include "stdlib.h"

int ft_char_is_alpha (char c)
{
    if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90))) 
    {
        return 0; 
    }
    return 1;     
}

int ft_char_is_numeric(char c)
{   
    if (!(c >= '0' && c <= '9')) 
    {
        return 0;      
    }
    return 1;
}

int ft_char_is_lowercase(char c) 
{
    if (!(c >= 97 && c <= 122)) 
    {
        return 0; 
    } 
    return 1;
}

char ft_charupcase(char c) 
{
    
    if (ft_char_is_lowercase(c)) 
    {
        c = c - 32 ;
    }
    
    return c;
}

int ft_char_is_upcase(char c) 
{
    if (!(c >= 'A' && c <= 'Z')) 
    {
        return 0; 
    } 
    return 1;
}

char ft_charlowcase(char c) 
{
    
    if (ft_char_is_upcase(c)) 
    {
        c = c + 32 ;
    }
    
    return c;
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    
    str[i] = ft_charupcase(str[i]);
    
    i = 1;
    
    while (str[i] != '\0') 
    {
        if (ft_char_is_alpha(str[i - 1])) 
        {
            str[i] = ft_charlowcase(str[i]);  
        }
        else if ((!(ft_char_is_alpha(str[i - 1]))) && (!(ft_char_is_numeric(str[i-1]))))
        {
            str[i] = ft_charupcase(str[i]);
        }
        
        i += 1;
    }
    
    return str;
}    

int main(int argc, char **argv) 
{
    char *test_chain = "78saLut, comMent tU vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", test_chain);
    ft_strcapitalize(test_chain);
    printf("%s\n", test_chain);
    
    return 0;
}
