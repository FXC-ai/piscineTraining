#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0'){c += 1;}
	return c;
}

char *ft_strstr(char *str, char *to_find)
{

    int len_to_find = strlen(to_find);
    char *to_find0 = to_find;

    if (*to_find == '\0')
    {
        return str;
    }

    while (*str != '\0')
    {
        if (*str == *to_find)
        {
            to_find++;
        }
        else if (*str != *to_find)
        {
            to_find = to_find0;
        }

        if (*to_find == '\0')
        {   
            int d = to_find - &to_find[0];
            str = str - len_to_find +1;
            printf("Valeur retournee : %s\n", str);
            return str;
        }

        str++;
    }

    return str;

}

int main(int argc, char **argv) 
{
    int n = 5;
    char *s1 = "QmoQQmoQQQ";
    char s2[] = "QQ";

    char* rslt = ft_strstr(s1, s2);
    
    printf("RETOUR = %s\n", rslt);

    return 0;
}