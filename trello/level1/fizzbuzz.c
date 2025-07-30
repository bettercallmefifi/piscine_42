#include <unistd.h>

int main()
{
    int n = 1;
    int rest;
    char n1;
    char n2;

    while (n >= 1 && n <= 100)
    {
        if(n % 3 == 0 && n % 5 == 0)
            write(1,"fizzbuzz\n",9);
        else if(n % 3 == 0)
            write(1,"fizz\n",6);
        else if(n % 5 == 0)
            write(1,"buzz\n",6);
        else
        {
            if(n >= 10)
            {
                rest = n;
                n1 = (rest / 10) + '0';
                n2 = (rest % 10) + '0';

                write(1,&n1,1);
                write(1,&n2,1);
            }
            else
            {
                n1 = n + '0';
                write(1,&n1,1);
            }
            write(1,"\n",1);
        }
        n++;
    }
    return(0);
}