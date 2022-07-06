#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0')
	{	
		c += 1;
	}	
	return c;
}

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


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
  t_stock_str *tab = malloc((ac+1) * sizeof(t_stock_str));
  if(tab == NULL)
  {
    return NULL;
  }
  int i = 0; 
  while(i < ac)
  {
    t_stock_str current_str;
    current_str.size = ft_strlen(av[i]);
    current_str.str = av[i];
    current_str.copy = ft_strdup(current_str.str);
    tab[i] = current_str; 
    i++;
  }
  t_stock_str current_str;
  current_str.size = 0;
  current_str.str = "0";
  current_str.copy = "0";
  tab[i] = current_str;

  return tab;
}


