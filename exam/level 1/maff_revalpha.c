#include <unistd.h>

int main()
{
	char letter = 'z';

	while(letter >= 'a')
	{
		if((letter - 'z')%2 == 0)
		       write(1,&letter,1);
		else
		{
			char lower = letter - 32;
			write(1,&lower,1);
		}
		letter--;
	}
	write(1,"\n",1);
	return(0);
}

