#include <unistd.h>

void	ft_print_alphabet()
{
	char n = 'a';
	while( n <= 'z')
	{
		write(1,&n,1);
		n++;
	}
}
int main()
{
	ft_print_alphabet();
	return(0);
}