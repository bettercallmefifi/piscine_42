#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int len;
    if(argc == 2)
    {
        while(argv[1][i])
            i++;
        len = i - 1;
        while(len >= 0)
        {
            write(1,&argv[1][len],1);
            len--;
        } 
    }
    write(1,"\n",1);
    return(0);
}