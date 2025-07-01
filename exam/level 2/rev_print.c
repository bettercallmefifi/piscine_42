#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int len = 0;
	if(argc == 2)
	{
		while(argv[1][len] != '\0')
		{
			len++;
		}
		i = len - 1;
		while(i >= 0)
		{
			write(1,&argv[1][i],1);
			i --;
		}
	}

	write(1,"\n",1);
	return(0);
}
