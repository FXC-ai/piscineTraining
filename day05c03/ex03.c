#include "stdio.h"
#include "stdlib.h"
#include <string.h>


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
     while (*dest != '\0')
    {
        dest++;
    }

    int i = 0;    
    while (*src != '\0' && i < nb)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return dest;

}


int main(int argc, char **argv) 
{
    int n = 5;
    char s1[11] = "abcd";
    char s2[] = "efghijklm";
    
    
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    ft_strncat(s1, s2, n);
    
    printf("s1 = %s\n", s1);

    int i =0;
    while (i < 4+n+1)
    {
        printf("i = %d / %d\n",i, s1[i]);
        i++;
    }

    return 0;
}