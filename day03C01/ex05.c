#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0') // str[i] est equivalent à *(str+i)
	{
		write(1,&str[i],1);
		i+=1;
	}
}

int main()
{
  
  char str[] = "Hello";
  
  ft_putstr(&str[0]);

  return 0;
}

