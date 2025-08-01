int ft_atoi(const char *str)
{
    int i = 0;
    int rest = 0;
    int signe = 1;

    while(str[i] && (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            signe *= -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        rest = rest * 10 + (str[i] - '0');
        i++;
    }
    return(signe * rest);
}

#include <stdio.h>

int main()
{
    char str[] = "-1337,8ft_atoi";
    int result = ft_atoi(str);
    printf("%d\n",result);
    return(0);
}