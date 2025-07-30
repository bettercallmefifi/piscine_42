char    *ft_strcpy(char  *dest, char *str)
{
    int i = 0;
    while(str[i])
    {
        dest[i] = str[i] ;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>
int main()
{
    char str[] = "ferdaous";
    char dest[20];

    printf("%s",ft_strcpy(dest,str));
    return(0);
}