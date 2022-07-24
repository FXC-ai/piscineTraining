CFLAGS = -Wall -Wextra -Werror

all : ft_display_file

ft_display_file : ft_display_file.o
	gcc $(CFLAGS) -o ft_display_file ft_display_file.o

ft_display_file.o : ft_display_file.c
	gcc $(CFLAGS) -c ft_display_file.c

fclean : clean
	rm ft_display_file

clean :
	rm *.o
