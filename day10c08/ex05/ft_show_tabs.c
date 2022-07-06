#include "ft_strs_to_tab.h"
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int lenght_nb(int nb)
{
    int lenght = 0;
    int temp = 1;

    while (temp != 0)
    {
        temp = nb / 10;
        nb = temp;
        lenght+=1;
    }

    return lenght;

}

void ft_putnbr(int nb)
{

    int len = lenght_nb(nb);

    int divider = 1;

    while (len != 1)
    {
        divider*= 10;
        len-=1;
    }

    while (divider != 0)
    {
        int c = nb / divider;
        nb = nb - (divider*c);
        ft_putchar(c + '0');
        divider /= 10;
    }
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i+=1;
	}
}

void ft_show_tab(struct s_stock_str *par)
{
  int i = 0;
  char n = '\n';
  while(par[i].size != 0)
  {
    ft_putstr(par[i].str);

    write(1,&n,1);
    ft_putnbr(par[i].size);
    write(1,&n,1);
    ft_putstr(par[i].copy);
    write(1,&n,1);
    i++;
  }

}


int main (){

  int ac = 4;
  char *strs[4];
  strs[0] = "AllerJeVaisEssayerAvecUneChaineUnPeuPlusLongue";
  strs[1] = "jupitas";
  strs[2] = "travail";
  strs[3] = "paie";
  
  t_stock_str *tab = ft_strs_to_tab(ac, strs);
 
  ft_show_tab(tab);
  free (tab);
  return 0;
}

