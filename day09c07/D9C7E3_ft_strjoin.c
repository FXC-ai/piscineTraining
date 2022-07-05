#include <stdio.h>
#include <stdlib.h>


char *ft_strjoin(int size, char **strs, char *sep)
{
  if(size == 0)
  {
    char *result = malloc(0);
    return result;
  }
  int i = 0;
  int str_size = 0;
  while(i < size)
  {
    int j = 0;
    while(*(strs[i] + j) != '\0')
    {
      j++;
    }
    str_size += j;
    i++;
  } 
  char *sep_ini = sep;
  int str_size_sep = 0;
  while(*sep != '\0')
  {
    sep ++;
    str_size_sep ++;
  }
  sep = sep_ini; 
  int len_char = (str_size+1) + (str_size_sep - 1)*size;
  char *str_concat = malloc(len_char);
  if(str_concat != NULL)
  {
    printf("new allocation = %p\n", str_concat);

  }
  int index = 0;
  int cursor = 0;
  while(index < size)
  {
    int l = 0;
    while(strs[index][l] != '\0')
    {
      str_concat[cursor] = strs[index][l];
      l++;
      cursor ++;
    }
    if(index != (size - 1))
    {
      while(*sep != '\0')
      {
        str_concat[cursor] = *sep;
        sep ++;
        cursor ++;
      }
      sep = sep_ini;
    }
    index++;
  }
  str_concat[cursor] = '\0';
  return str_concat;
}


int main (void){
  
  int size = 4;
  char *strtest[4];
  char *sep = "---"; 
  
  strtest[0] = "Ceci";
  strtest[1] = "est";
  strtest[2] = "un";
  strtest[3] = "TEST";
  

  char *result = ft_strjoin(size, strtest, sep);

  printf("%s\n",result);
  
  return 0;
}

