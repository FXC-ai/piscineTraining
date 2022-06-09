#include <stdio.h>
#include <stdlib.h>

void ft_ultimate_ft(int *nbr);

int main()
{
  //int test = 42;
  
  
  //int *test01 = &test;
  //int *test02 = &test01;
  
  //printf("valeur pointée par test 01 est %d\n", *test01);
  //printf("test contient %d à l'adresse %p \n", test, test01);
  //printf("test01 contient %p à l'adresse %p \n", test01, test02);
  
  int *pointeur_test = NULL;
  ft_ultimate_ft(pointeur_test);
  
  return 0;
}

void ft_ultimate_ft(int *nbr)
{
	int value = 42;
	nbr = &value;
   
}