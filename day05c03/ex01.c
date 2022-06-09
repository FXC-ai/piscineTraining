#include "stdio.h"
#include "stdlib.h"
#include <string.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    
    int i = 0;
    
    while ( ((*s1 != '\0' || *s2 != '\0') && (*s1 == *s2)) && i < n-1) 
    {
        s1++; 
        s2++;
        i++;
    }
    
    return (*s1 == *s2) ? 0 : (*(unsigned char *) s1 - *(unsigned char *) s2);    
}

int main(int argc, char **argv) 
{
    char s1[] = "abcdeefw";
    char s2[] = "abcdfewfh";
    
    int n = 4;
    
    printf("result = %d\n", strncmp(s1, s2, n));
    printf("result ft = %d\n", ft_strncmp(s1, s2, n));
    
    return 0;
}