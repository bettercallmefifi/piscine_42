int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i])
        i++;
    return(s1[i] - s2[i]);
}

#include <stdio.h>

int main()
{
    char s1[] = "ferdaous";
    char s2[] = "ferdaous";

    int result = ft_strcmp(s1,s2);
    printf("%d\n",result);
    return(0);
}