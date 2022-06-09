// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    
    while (*s1 != '\0' && (*s1 == *s2)) 
    {
        s1++;
        s2++;   
    }
    
    int diff = *s1 - *s2;
    
    if (diff == 0) 
    {
        return 0;
    }
    else if (diff < 0) 
    {
        return - 1;
    }
    else if (diff > 0) 
    {
        return 1;
    }

}

int main(int argc, char **argv) 
{
    char s1[] = "LaATllll";
    char s2[] = "LpAT0000000";
    
    printf("result = %d\n", strcmp(s1, s2));
    printf("result ft = %d\n", ft_strcmp(s1, s2));
    
    return 0;
}
