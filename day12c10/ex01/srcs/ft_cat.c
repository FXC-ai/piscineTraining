#include "ft_cat.h" 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i+=1;
	}
}

int ft_file_open(char *file_name)
{
	int fd = open(file_name, O_RDONLY);
	return fd;
}

int ft_write_file(int fd)
{
	char buf[BUFFER_SIZE];
	write (1, buf, read(fd, buf, BUFFER_SIZE));
	ft_putchar('\n');
	close(fd);
	return 0;
}

int ft_write_tty ()
{
	char buf[BUFFER_SIZE];
	while(read(0, buf, BUFFER_SIZE))
	{
		ft_write_file(2);
		close(2);		
	}
	return 0;
}

void ft_display_errno_msg(char *file_name)
{
		ft_putstr("ft_cat: ");
		ft_putstr(file_name);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
}

void ft_create_file()
{
	char ch;
	while(read(STDIN_FILENO, &ch, 1) > 0)
	{
		write (1, &ch, 1);
	}
}

int ft_display_files(int argc, char *argv[])
{
	int c = 1;
	while(c < argc)
	{
		int fd = ft_file_open(argv[c]);

		if(fd == -1)
		{
			if(*argv[c] == '-')
			{
				ft_write_tty();
			} 
			else
			{
				errno = 2;
				ft_display_errno_msg(argv[c]);
			}
		}
		else
		{
			ft_write_file(fd);
		}	
		c++;	

	}
	return 0;
}

