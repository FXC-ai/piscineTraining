OBJ =  srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_swap.o srcs/ft_strcmp.o srcs/ft_strlen.o includes/ft.h
CFLAGS =  -Wall -Wextra -Werror


libft.a : $(OBJ)
	ar -rsc libft.a $^

srcs/ft_putchar.o : srcs/ft_putchar.c
	gcc $(CFLAGS) -c $< -o $@ 

srcs/ft_putstr.o : srcs/ft_putstr.c
	gcc $(CFLAGS) -c $< -o $@ 

srcs/ft_swap.o : srcs/ft_swap.c
	gcc $(CFLAGS) -c $< -o $@ 

srcs/ft_strcmp.o : srcs/ft_strcmp.c
	gcc $(CFLAGS) -c $< -o $@ 

srcs/ft_strlen.o : srcs/ft_strlen.c
	gcc $(CFLAGS) -c $< -o $@ 


all : libft.a

clean:
	rm -f srcs/*.o

fclean:
	rm $(wildcard *.a)
	rm $(wildcard srcs/*.o)

re: fclean all
