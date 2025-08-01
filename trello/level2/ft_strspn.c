#include <stddef.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    int len = 0;
    int found;

    
    while(s[i])
    {
        j = 0;
        found = 0;
        while(accept[j])
        {
            if(s[i] == accept[j]){
                found = 1;
                break;
            }
            j++;
        }
        if(!found)
            return len;
        len++;
        i++;
    }
    return(len);
}

#include <stdio.h>

int main()
{
    printf("%zu",ft_strspn("ferdaous","ferda"));
    return(0);
}