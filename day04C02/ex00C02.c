#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
  	while(src[i] != '\0')
  	{
  		dest[i] = src[i];
  		i += 1;
  	}
  	
  	dest[i] = '\0';

	return dest;
}

int main()
{
  
  char chain00[] = "TextsLon";
  char chain01[100] = {0};
  
  char *retour = ft_strcpy(chain01, chain00);
  
  printf("chain00 = %s\n", chain00);
  printf("chain01 = %s\n", chain01);
  printf("retour = %p\n", retour); 
  
  return 0;
}

