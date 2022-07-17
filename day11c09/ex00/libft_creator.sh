gcc -c -Wall -Werror -Wextra ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c
ar -rsc libft.a *.o
rm *.o
