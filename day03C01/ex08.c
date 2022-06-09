#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int a_temp = *a;
	int b_temp = *b;
	
	*a = b_temp;
	*b = a_temp;	
}

void ft_sort_int_tab(int *tab, int size)
{
	
	int check = 1;
	while (check != 0)
	{
		check = 0;
		
		int c = 0;
	
		while (c < size)
		{
			if (tab[c] > tab[c+1])
			{
				ft_swap(&tab[c], &tab[c+1]);
				check +=1;
			}

			c+=1;
		}
	}
	
}

int main()
{
  int tab[6] = {9,8,6,4,56,8};
  
  int size = 6;
  
  ft_sort_int_tab(tab, size);
  
  printf("0 = %d\n", tab[0]);
  printf("1 = %d\n", tab[1]);
  printf("2 = %d\n", tab[2]);
  printf("3 = %d\n", tab[3]);
  printf("4 = %d\n", tab[4]);
  printf("5 = %d\n", tab[5]);
  //printf("6 = %d\n", tab[6]);
  
  return 0;
}

