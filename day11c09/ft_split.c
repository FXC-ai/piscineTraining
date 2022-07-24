#include <stdio.h>
#include <stdlib.h>

int ft_strlen (char *str)
{
	int i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	return i;
}



char *ft_strstr(char *str, char *to_find)
{

    int len_to_find = ft_strlen(to_find);
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
            str = str - len_to_find +1;
            return str;
        }

        str++;
    }

    return str;

}

char **ft_split(char *str, char *charset)
{
	
	(void)str;
	(void)charset;
	
	char **r_tab = NULL;
	r_tab[0] = "ola";

	return r_tab;	
}

char **fct_bidon(char **str)
{
	int i = 0; 
	while(i < 6)
	{
		str[malloc()] = "ptn";
		i++;
	} 
	return str;
}


int main (void){
	
	char *str_test = "ONe_twO__this_a_test";
	char *charset = "_";
	int len_charset = ft_strlen(charset);
	(void)len_charset;
	(void)str_test;

	
	char *tabT[6];
	
	printf("taille %lu\n", sizeof(tabT));
	tabT[0] = "salut";
	printf("%s\n", tabT[0] );
	printf("taille %lu\n", sizeof(tabT));
	
	char **r_f = fct_bidon(tabT);

	printf("r_f %s\n", r_f[0]);
	printf("r_f %s\n", r_f[1]);
	
	

	char **t = malloc(0);
	char *u = "une";
	char *v = "vie";
	char *w = "belle";
	char *z = "toujours";
	t = &u;
	t++;
	t = &v;
	t++;
	t = &w;
	t++;
	t = &z;
	
	

	printf("%p t[0] : %s\n",t[0], t[0] );

	printf("%p t[1] : %s\n",t[1], t[1] );
	
	printf("%p t[2] : %s\n", t[2], t[2]);

	printf("%p t[3] : %s\n", t[3], t[3]);
  return 0;
}

