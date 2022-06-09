#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int a_temp = *a;
	int b_temp = *b;
	
	*a = b_temp;
	*b = a_temp;	
}


int main()
{
  int a = 1;
  int b = 2;
  
  printf("a vaut %d et b vaut %d\n", a, b);
  ft_swap(&a,&b);
  printf("a vaut %d et b vaut %d", a, b);
  
  return 0;
}

