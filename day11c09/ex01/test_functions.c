#include <stdio.h>
#include "includes/ft.h"

int main (){
  

  char *str_test = "Print it !";
  char *str_test01 = "Print it";
  int a = 2;
  int b = 1;
  char E = 'E';

  ft_putchar(E);

  printf("\n");
  ft_putstr(str_test);
  int lenstr = ft_strlen(str_test);
  printf("len =  %d\n", lenstr);
  int cmp = ft_strcmp(str_test, str_test01);  
  printf("cmp = %d\n", cmp);
  printf("a = %d et b = %d\n",a,b );
  ft_swap(&a,&b);
  printf("After ft_swap : a = %d et b = %d\n",a,b );

  return 0;
}

