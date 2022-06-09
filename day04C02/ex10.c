// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int ft_strlen(char *str)
{
    int c = 0;
    
    while (str[c] != '\0') 
    {    
        c += 1;
    }
    
    return c;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;
    
    while (i < size) 
    {
        dest[i] = src[i];
        i += 1;
    }
    
    dest[i] = '\0';
    
    return ft_strlen(src);
}


int main(int argc, char **argv) 
{
    
    char src[] = "0abc";
    char dst[] = "";
    
    unsigned int result = ft_strlcpy(dst, src, 4);
    
    printf("%d\n", result);
    printf("%s\n", src);
    printf("%s\n", dst);
    
    int c = 0;
    
    while (c < 4) {
        printf("%c\n", dst[c]);
        c++;
    }
    
    return 0;
}
