#ifndef ft_boolean_h
#define ft_boolean_h

#include <unistd.h>
#include <stdio.h>

typedef enum t_bool t_bool;
enum t_bool
{
  FALSE, TRUE
};

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(nbr) ((nbr%2 == 0) ? 1 : 0)
#define SUCCESS 0

#endif
