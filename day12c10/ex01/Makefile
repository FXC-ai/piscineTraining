SRCS = ./srcs/main.c ./srcs/ft_cat.c
OBJ = main.o ft_cat.o
CFLAGS = -Wall -Werror -Wextra

all : ft_cat

ft_cat: $(OBJ)
	gcc -o ft_cat $(OBJ)

main.o: ./includes/ft_cat.h ./srcs/main.c
	gcc $(FLAGS) -c ./srcs/main.c -I includes

ft_cat.o: ./includes/ft_cat.h ./srcs/ft_cat.c
	gcc $(FLAGS) -c ./srcs/ft_cat.c -I includes 

fclean : clean
	rm ft_cat

clean :
	rm *.o


