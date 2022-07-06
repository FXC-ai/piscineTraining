#include <stdio.h>
#include <stdlib.h>


typedef struct s_stock_str
{
  int size;
  char *str;
  char *copy;

} t_stock_str;

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0')
	{	
		c += 1;
	}	
	return c;
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
    current_str.copy = av[i];
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

int main (){

  int ac = 4;
  char *strs[4];
  strs[0] = "Aller";
  strs[1] = "jupitas";
  strs[2] = "travail";
  strs[3] = "paie";
  
  t_stock_str *tab = ft_strs_to_tab(ac, strs);

 
  printf("C = %s\n", tab[4].str ); 
  return 0;
}

