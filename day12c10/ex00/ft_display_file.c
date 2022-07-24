#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h>
#define NO_FILE "File name missing."
#define MANY_FILE "Too many arguments."
#define FAULT_FILE "Cannot read file." 

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i+=1;
	}
}

void ft_display_file(int argc, char *argv[])
{
    int fd; 
    char buf[1000];
		char r_ch = '\n'; 
	
		fd = open(argv[1], O_RDWR);         
  
 	  if (argc ==2 && fd == -1)
			ft_putstr(FAULT_FILE);

		if(argc == 1)
		{
			ft_putstr(NO_FILE);
		}
		else if (argc > 2)
		{
			ft_putstr(MANY_FILE);
		}
		else if (argc == 2)
		{
    	write(1, buf, read(fd, buf, 1000));
		}

		write(1, &r_ch, 1);
    close(fd);
}

int main (int argc, char *argv[]) 
{
		ft_display_file (argc, argv);
    return 0; 
} 
