int occ_c(char *str)
{
    int  i = 0;
    int count = 0;
    while(str[i])
    {
        if(str[i] == 'c')
            count++;
        i++;
    }
    return(count);
}
#include <stdio.h>

int main()
{
    char str[] = "ferdacousc el idrissic";
    int c_count = occ_c(str);
    printf("%d",c_count);
    return(0);
}