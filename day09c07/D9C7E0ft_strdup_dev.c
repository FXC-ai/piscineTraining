#include <stdio.h>
#include <stdlib.h>
#include <libc.h>


char *ft_strdup (char *src)
{
    
    char *s = src;

    int size_src = 0;

    while (*src != '\0')
    {
        size_src++;
        src++;
    }

    void *dest = malloc(size_src);

    if (dest == 0)
    {
        return NULL;
    }
    
    char *d = dest;

    while (size_src--)
    {
        *d++ = *s++;
    }

    return dest;
}

int main (int argc, char **argv)
{

    char *src = "tinquietepasmonpetitloupcestlaviequiveutca";
    printf("(main)Chaine source : %s\n",src);
    
    char *dup = ft_strdup(src);

    printf("(main)Pointeur : %s\n", dup);

    return 0;
}