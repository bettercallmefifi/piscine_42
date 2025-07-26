#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
    {
        len++;
    }
    return(len);
}

char *ft_strdup(char *src)
{
    int len_s = ft_strlen(src);
    char *rest = malloc(len_s + 1);
    int i = 0;
    if(!rest)
        return NULL;
    while (src[i])
    {
        rest[i] = src[i];
        i++;
    }
    rest[i] = '\0';
    return(rest);
}
struct s_stock_str *ft_strs_to_tab(int argc, char **argv)
{
    t_stock_str *rst;
    int i = 0;
    rst = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1));
    if(!rst)
        return NULL;
    while(i < argc)
    {
        rst[i].str = argv[i];
        rst[i].size = ft_strlen(argv[i]);
        rst[i].copy = ft_strdup(argv[i]);
        if(rst[i].copy == NULL)
            return NULL;
        i++; 
    }
    rst[i].size = 0;
    return(rst);
}