/*#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int indix = 0;
    
    if(argc == 2)
    {
       while(argv[1][i] != '\0')
       {
        if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                indix = argv[1][i] - 'a' + 1;
            else
                argv[1][i] = argv[1][i] - 'A' + 1;
            while(indix >= 0)
            {
                write(1,&argv[1][i],1);
                indix--;
            }
        }
        i++;
       }
    }
    write(1,"\n",1);
    return(0);
}*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int indix = 0;
    char c;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            {
                indix = argv[1][i] - 'a' + 1;
                while (indix > 0)
                {
                    write(1, &argv[1][i], 1);
                    indix--;
                }
            }
            else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                indix = argv[1][i] - 'A' + 1;
                while (indix > 0)
                {
                    write(1, &argv[1][i], 1);
                    indix--;
                }
            }
            else
            {
                write(1, &argv[1][i], 1); // أي رمز آخر كيطبع مرة وحدة
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
