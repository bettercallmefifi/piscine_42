#include <unistd.h>

int main()
{
	char	letter = 'a';

	while(letter <= 'z')
	{
		if((letter - 'a') % 2 == 0)
			write(1,&letter,1);
		else
		{
			char upper = letter - 32;
			write(1,&upper,1);
		}
		letter++;
	}
	write(1,"\n",1);
	return(0);
}
