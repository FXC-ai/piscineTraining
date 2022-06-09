#include "stdio.h"
#include "stdlib.h"
#include <string.h>


char* ft_strcat(char *s1, char *s2)
{
    
    while (*s1 != '\0')
    {
        s1++;
    }

    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';

   return s1;
}

int main(int argc, char **argv) 
{
    int n = 11;
    char s1[11] = "01234";
    char s2[] = "56789";
    
    
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    ft_strcat(s1, s2);
    
    printf("s1 = %s\n", s1);

    int i =0;
    while (i < n)
    {
        printf("i = %d / %c\n",i, s1[i]);
        i++;
    }

    return 0;
}