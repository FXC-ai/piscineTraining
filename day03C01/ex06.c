#include <stdio.h>

int ft_strlen(char *str)
{
	int c = 0;
	
	while (str[c] != '\0')
	{	
		c += 1;
	}
	
	return c;
}

int main()
{
  char str[] = "Vive le c";
  
  //printf("%p",&str[0]); 
  // strictement eq à printf("%p", str);
  
  int r = ft_strlen(&str[0]);
  
  printf("%d",r);
  
  return 0;
}

