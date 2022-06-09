#include <stdio.h>
#include <string.h>
#define STR_L 5

int ft_strlen(char *str)
{
    int c = 0;
    
    while (str[c] != '\0') 
    {	
        c += 1;
    }
    
    return c;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0') 
    {
        dest[i] = src[i];
        i += 1;
    }
    
    dest[i] = '\0';
    
    return dest;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

    int lenght_src = ft_strlen(src);
    
    if (n > lenght_src) 
    {
        int i = 0;
        while(i < lenght_src) 
        {
            dest[i] = src[i];
            i += 1;
        }
        
        while(i >= lenght_src && i < n) 
        {
            dest[i] = '\0';
            i += 1;
        }  
    }
    else if (n == lenght_src) 
    {
        int i = 0;
        while(src[i] != '\0') 
        {
            dest[i] = src[i];
            i += 1;
        }
        
        dest[i] = '\0';
    }
    else if (n < lenght_src) 
    {
        int i = 0;
        while(i < n) 
        {
            dest[i] = src[i];
            i += 1;
        }            
    }
    
    
    return dest;
}

int main()
{
    
    
    char src01[] = "abcd";
    char dest01[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};
    
    int j = 0;
    while (j < 8) 
    {
        printf("%c\n", dest01[j]);
        j += 1;
    }
    
    printf("\n");
    char *result01 = ft_strncpy(dest01, src01, 6);
    
    int k = 0;
    while (k < 8) 
    {
        printf("%c\n", dest01[k]);
        k += 1;
    }
    
    printf("src = %s\n", src01);
    printf("dest = %s\n", dest01); 
    
    return 0;
}
