#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
  int a = 0;
  int b = 0;
  
  ft_ultimate_div_mod(&a, &b);
  
  return 0;
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int dT = *a / *b;
	int rT = *a % *b;

	*a = dT;
	*b = rT;
}