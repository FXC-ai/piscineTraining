#include "ft_tail.h"

/*
void ft_putstr (char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	} 
}
*/

int ft_atoi(char *str)
{
    int nbr_digit = 0;
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            nbr_digit++;
        }
        str++;
    }
	
		int result = 0;
		int multiplier = 1;	
		while(nbr_digit != 0)
		{
		  str--;
			result += (*str - '0') * multiplier;
			multiplier *= 10;	
			nbr_digit--;
		}
    return result;
}

int ft_strlen (char *str)
{
	int i = 0; 
	while(*str != '\0')
	{
		i++;
		str++;
	} 
	return i;
}

int ft_open_file (char *file_name)
{
	int fd = open (file_name, O_RDONLY);
	if(fd == -1)
	{
		errno = 2;
	} 
	return fd;
}


int ft_filelen (int fd)
{
	char c;
	unsigned int byte_read;
	int i = 0;
	
	while((byte_read = read(fd, &c, 1)) > 0)
	{
		if(byte_read == (unsigned int) -1)
		{
			errno = 2;
			return -1;
		}
		i++;
	} 
	return i;
}

char *ft_create_buf (int file_len)
{
	char *buf  = (char *) malloc(file_len * sizeof(char));
	if(buf == NULL)
	{
		errno = 12;
	}
	
	return buf;
}

int ft_cpyfile (char *buf, int fd, int file_len)
{
	read (fd, buf, file_len);
	return 0;
}

void ft_display_tail (char *buf, int c, int file_len)
{
	int start_byte = file_len - c;

	if(start_byte < 0)
	{
		start_byte = 0;
	} 

	char *buf_current = buf + start_byte;
	
	while(*buf_current != '\0')
	{
		write (1,buf_current,1);
		buf_current ++;
	}

	free(buf);

}

int main (int argc, char *argv[]){

	(void) argc;
	errno = 0;

	char *file_name = argv[3];
	
	int fd = ft_open_file(file_name);

	if(errno == 2)
	{
		ft_putstr(basename(argv[0]));
		ft_putstr(": ");
		ft_putstr(argv[3]);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
	}
	else
	{
		int file_len = ft_filelen (fd);
		close (fd);

		if(!(file_len <= 0))
		{
			char *buf = ft_create_buf (file_len);

			fd = ft_open_file(file_name);
	
			ft_cpyfile (buf, fd, file_len);

			close(fd);

			ft_display_tail (buf, ft_atoi(argv[2]), file_len);

		}
	
	}
	
	return 0;
}

