#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int ft_convert_base2 (int nbr, char* base_to);

int ft_iterative_power (int nb, int power)
{
    int result = 1;

    if (power < 0)
    {
        return 0;
    }
    
    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}

int ft_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0')
		c += 1;
	return c;
}

bool ft_digit_in_base(char digit, char *base_from)
{
  while(*base_from != '\0')
  {
    if(digit == *base_from)
    {
      return true;
    }
    base_from++;
  }
  return false;
}

char *ft_check_whitespace (char *nbr)
{
  while(*nbr == ' ')
  {
    nbr++;
  }
  return nbr;
}

int ft_base_valid_len(char *base)
{
    if (ft_strlen(base)<=1)
    {   
        return 0;
    }
    return 1;
}

int ft_base_valid_uniq(char *base)
{
    char *base_ini = base;
    int i = 1;
    while (*base != '\0')
    {
        char *base_temp = base_ini + i;
        while (*base_temp != '\0')
        {
            if (*base_temp == *base)
            {
                return 0;
            }
            base_temp++;
        }
        base++;
        i++;
    }
    return 1;
}

int ft_base_valid_caract(char *base)
{
    while (*base != '\0')
    {
        if (!((*base >= '0' && *base<= '9') || 
            (*base >= 'a' && *base<= 'z') || 
            (*base >= 'A' && *base<= 'Z')) )
        {
            return 0;
        }
        base++;
    }
    return 1;
}

bool ft_base_is_valid (char *base_from)
{

  int base_valid_len = ft_base_valid_len(base_from);
  int base_valid_uniq = ft_base_valid_uniq(base_from);
  int base_valid_caract = ft_base_valid_caract(base_from); 
  
  if(base_valid_len + base_valid_uniq + base_valid_caract == 3)
  {
    return true;
  }
  
  return false;
}

char *ft_nbr_valid(char *nbr, char *base_from)
{
  int is_negativ = 1;
  char *nbr_result = malloc(ft_strlen(nbr)*sizeof(char));
  if(nbr_result == NULL){return NULL;}

  char *nbr_result_ini = nbr_result;  
  nbr = ft_check_whitespace (nbr);
  while(*nbr == '+' || *nbr == '-')
  {
    *nbr == '-' ? is_negativ*=(-1):is_negativ;
    nbr ++; 
  }
  if(is_negativ == (-1))
  {
    *nbr_result = '-';
    nbr_result++;
  }
  while(ft_digit_in_base(*nbr, base_from) == true)
  {
    *nbr_result++ = *nbr++;
  }
  *nbr_result = '\0';
  return nbr_result_ini;
}

int ft_find_index(char digit, char *base_from)
{
  int index = 0;
  while(*base_from != '\0')
  {
    if(digit == *base_from)
    {
      return index;
    }
    index++;
    base_from ++;
  }

  return -1;
}


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
  (void)base_to;
  bool is_negativ = (*nbr == '-' ? true : false); 
  int nbr_10 = 0; 
 
  if(is_negativ == true)
  {
    nbr++;
  }

  int nbr_size = ft_strlen(nbr);

  while(*nbr != '\0')
  {
    int index = ft_find_index(*nbr, base_from);
    nbr_10 += index*ft_iterative_power(ft_strlen(base_from), (nbr_size-1));
    nbr_size--;
    nbr++;
  }
  
  printf("int_10 = %d\n", nbr_10); 
  ft_convert_base2(nbr_10, base_to);

  return nbr;
}

int ft_convert_base2 (int nbr, char* base_to)
{
  
  int len_base = ft_strlen(base_to);
  printf("longeur de la base = %d\n", len_base);
  int nbr_base = malloc(sizeof(int)); 
  while (nbr > 0)
  {   
    mod = nbr % lenbase;
    nbr = nbr / lenbase;
    char c = base[mod];
    i++;
  }
  (void)base_to;
  return nbr;

}


int main (){

  char *nbr = "---abcdefF";
  char *base_from = "0123456789abcdef";
  char *base_to = "01";

  char *nbr_from = ft_nbr_valid(nbr, base_from);
  //bool base_valid = ft_base_is_valid(base_from);
  ft_convert_base(nbr_from, base_from, base_to);


  printf("test strlen  =  %d\n", ft_strlen("abc"));
  printf("nbr_from =  %s\n", nbr_from);
  return 0;
}

