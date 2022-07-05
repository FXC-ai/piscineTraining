#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int range = max - min;
  
  if(range<0){
    return NULL;
  }

  int *tab_range = NULL;
  tab_range = malloc(range*sizeof(int));
    
  while(range--)
  {
    tab_range[range] = min + range;
  }
  
  return tab_range;
}


int main (int argc, char **argv)
{
  int min = 2049;
  int max = 2045;  
  int *result = ft_range(min, max);

  int i = 0;
  while(i < (max-min))
  {
    printf("result[%d] = %d\n",i,result[i] );
    i++; 
  }
  return 0;
}

