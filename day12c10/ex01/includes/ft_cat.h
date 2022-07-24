#ifndef ft_cat_h
#define ft_cat_h

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
 
#define BUFFER_SIZE 1024

void ft_putchar(char c);

void ft_putstr(char *str);

int ft_file_open(char *file_name);

int ft_write_file(int fd);

int ft_write_tty ();

void ft_display_errno_msg(char *file_name);

void ft_create_file();

int ft_display_files(int argc, char *argv[]);

#endif
