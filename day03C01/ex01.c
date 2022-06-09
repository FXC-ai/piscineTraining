#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
  int *********pointeur = NULL;
  ft_ultimate_ft(pointeur);
  printf("%d", pointeur);
  return 0;
}

void ft_ultimate_ft(int *********nbr)
{
   int value = 42;
   int *pointeur_1 = &value;
   int *pointeur_2 = &pointeur_1;
   int *pointeur_3 = &pointeur_2;
   int *pointeur_4 = &pointeur_3;
   int *pointeur_5 = &pointeur_4;
   int *pointeur_6 = &pointeur_5;
   int *pointeur_7 = &pointeur_6;
   int *pointeur_8 = &pointeur_7;
   int *pointeur_9 = &pointeur_8;
   
	nbr = pointeur_9;
	   
   //printf("%d", *********nbr);
}

