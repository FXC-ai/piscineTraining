#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0'){c += 1;}
	return c;
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{

    const unsigned int destlen = ft_strlen(dest);
    const unsigned int srclen = ft_strlen(src);

    if (size >= 0 && size < destlen)
    {
        return (unsigned int) size + srclen;
    }

    if (destlen == size)
    {
        return (unsigned int) destlen + srclen;
    }

    while (*dest != '\0')
    {
        dest++;
    }

    int remaing = size - destlen;

    printf("%d", remaing);

    while (remaing > 1 && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        remaing--;
    }

    *dest = '\0';

    return (unsigned int) destlen + srclen;

}

int main(void)
{
    char    *str_base;
    char    *src;
    char    dest[100] = "ABCDEFG";
    char    dest2[100] = "ABCDEFG";
    
    src = "1234567890";
    
    int n =6;

    unsigned int rslt = strlcat(dest, src,n);
    unsigned int rslt2 = ft_strlcat(dest2, src,n);
    printf("--------TEST MAIN--------\n");
    printf("rslt = %d et rslt2 = %d\n", rslt, rslt2);

    printf("Modele : %s\n", dest);
    printf("Fonction : %s\n", dest2);
}