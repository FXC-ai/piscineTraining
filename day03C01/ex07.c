#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int temp00 = 0;
  int temp01 = 0;

  int c00 = 0;
  int c01 = size-1;
  
  while (c01 >= (size / 2))
  {
    //printf("%d : ", c01);
    //printf("%d, ", tab[c01]);
    temp01 = tab[c01];
    //printf("temp01 = %d\n", temp01);
    
    //printf("%d : ", c00);
    //printf("%d, ", tab[c00]);
    temp00 = tab[c00];
    //printf("temp00 = %d\n", temp00);
    
    tab[c01] = temp00;
    tab[c00] = temp01;
    
    
    
    c01-=1;
    c00+=1;
  }
  
  //printf("%p\n", tab);


}

int main()
{
  
  int tab[5] = {5,6,7,8,9};
  int size = 5;
  
  printf("%d\n", tab[0]);
  printf("%d\n", tab[1]);
  printf("%d\n", tab[2]);
  printf("%d\n", tab[3]);
  printf("%d\n", tab[4]);
  printf("\n");
  
  ft_rev_int_tab(tab, size);
  
  printf("%d\n", tab[0]);
  printf("%d\n", tab[1]);
  printf("%d\n", tab[2]);
  printf("%d\n", tab[3]);
  printf("%d\n", tab[4]);
  
  return 0;
}

