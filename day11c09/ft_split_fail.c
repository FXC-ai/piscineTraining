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

int ft_strstr_count(char *str, char *to_find)
{

    //int len_to_find = ft_strlen(to_find);
    char *to_find0 = to_find;
		int count = 0;
		// int count_str = 0;

    if (*to_find == '\0')
    {
        return count;
    }

    while (*str != '\0')
    {
   			printf("Caractere = %c\n", *str); 
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
						count ++;
						to_find = to_find0;
        }

        str++;
		}

    return count;

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
	
	int size_tab = ft_strlen(str);	

	printf("%d\n", size_tab );
	//int index_tab = 0;
	while(*str != '\0')
	{

		if(*str == charset[0])
		{
			int i = 0; 
			while(*str == charset[i] && charset[i] != '\0' )
			{
				printf("caracter cst = %c\n", *str);
				str++;
				i++;
			}
			i = 0;	
		}
		printf("caracter = %c\n", *str);
		
		str++;
	} 


	return NULL;	
}


int main (void){
	
	char *str_test = "ONe_twO__this_a_test";
	char *charset = "_";
	int len_charset = ft_strlen(charset);
	char **tab_pointeur = malloc(100);
	//char *cas = ft_strstr(str_test, charset);
  //tab_pointeur = &cas;
	//tab_pointeur++
	//printf("%s\n", tab_pointeur[0]);

	int i = 0;
	char *temp_str = ft_strstr(str_test, charset);
	while(*temp_str)
	{
		temp_str = ft_strstr((temp_str + len_charset), charset);
		printf("P = %p / R = %s\n", temp_str,temp_str );
		tab_pointeur = &temp_str;
		printf("tab_pointeur = %s et i = %d\n", tab_pointeur[0],i ); 
		tab_pointeur++;
		i++;
	}


		printf("tab_poi = %s\n", tab_pointeur[2] ); 
	//printf("tab_pointeur[0] : %s\n",tab_pointeur[0] );
	
	/*
	while(i>0)
	{
		printf("Pointeur : %p et value = %s\n", 
						tab_pointeur[i],
						tab_pointeur[i]);

		i--;
	}	
	*/
//	int count = ft_strstr_count(str_test, charset);
//	printf("count = %d\n", count);
	
//	char **result = ft_split(str_test, charset);
//	(void) result;

	char tab[21][2];

	printf("%lu\n",sizeof(tab) );

	char **t = malloc(48);
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
	
	

	printf("t[0] : %s\n",t[0] );

	printf("t[1] : %s\n",t[1] );
	
	printf("t[2] : %s\n", t[2]);

	printf("t[3] : %s\n", t[3]);
  return 0;
}

