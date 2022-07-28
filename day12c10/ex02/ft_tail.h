#ifndef ft_tail_h
#define ft_tail_h

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h> 
#include <errno.h>
#include <string.h>
#include <libgen.h>

void ft_putstr (char *str);

int ft_atoi(char *str);

int ft_strlen (char *str);

int ft_open_file (char *file_name);

int ft_filelen (int fd);

char *ft_create_buf (int file_len);

int ft_cpyfile (char *buf, int fd, int file_len);

void ft_display_tail (char *buf, int c, int file_len);

#endif
