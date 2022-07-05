#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range (int **range, int min, int max)
{
  int diff = max - min;

  if(diff <= 0)
  {
    *range = 0;
    return 0;
  }

  int *alloc = malloc((max - min)*sizeof(int));
  
  if(alloc == NULL)
  {
    *range = 0;
    return (-1);
  }

  *range = alloc;
  
  int i = 0;
  while(i<diff)
  {
    alloc[i] = min + i;
    i++;
  } 
  return diff;
}


int main (void){

   

  int min = 30;
  int max = 460;
  int *range;


  int result = ft_ultimate_range(&range, min, max);


  if(result > 0)
  { 
    int i = 0; 
    while(i < (result+1))
    {
      printf("*(range+%i) = %d \n",i, range[i]);
      i++;
    } 
  }  
  return 0;
}

