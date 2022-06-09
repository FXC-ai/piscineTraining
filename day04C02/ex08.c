#include "stdio.h"
#include "stdlib.h"


int ft_char_is_uppercase(char c) 
{
    if (!(c >= 65 && c <= 90)) 
    {
        return 0; 
    }
    return 1;
}


char *ft_strlowcase(char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (ft_char_is_uppercase(str[i])) 
        {
            str[i] = str[i] + 32 ;
        }
        i += 1;
    }
    return str;
}

int main(int argc, char **argv) 
{
    char *str = "aMoPOIdhdKNTewiw E";
    
    printf("Avant : %s\n", str);
    ft_strlowcase(str);
    printf("Apres : %s", str);
    
    return 0;
}
