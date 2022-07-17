int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && (*s1 == *s2)) 
    {
        s1++;
        s2++;   
    }
    int diff = *s1 - *s2;
    
    if (diff < 0) 
    {
        return - 1;
    }
    else if (diff > 0) 
    {
        return 1;
    }

    return 0;
    
}
