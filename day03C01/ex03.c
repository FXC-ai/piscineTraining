#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_ultimate_div_mod(int *a, int *b);


int main()
{
  int a = 15;
  int b = 7;
  int *a = &a;
  int *b = &b;
  
  return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int d = a / b;
	*div = d;
	
	int m = a % b;
	*mod = m;
	
}

 void ft_ultimate_div_mod(int *a, int *b)
 {
 	
 	//int d = a / b;
 	//int m = a % b;
 	
 	
 	
 
 }