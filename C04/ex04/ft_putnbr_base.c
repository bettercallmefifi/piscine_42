#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	doublechar(char *base)
{
	int i ;
	int j ;

	i = 0;
	while(base[i])
	{
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}
void	printNbr(int n,int base_value, char *base)
{
	long long int nb = n;
	if(nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= base_value)
		printNbr(nb / base_value, base_value, base);
	ft_putchar(base[nb % base_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_value = 0;
	while(base[base_value] != '\0')
	{
		if(base[base_value] == '+'|| base[base_value] == '-')
			return;
		base_value++;
	}
	if(base_value < 2)
		return;
	if(doublechar(base))
		return;
	printNbr(nbr,base_value,base);
}

int main(void)
{
    ft_putnbr_base(42, "01");       // Binary representation
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF"); // Hexadecimal representation
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789"); // Decimal representation with negative number
    write(1, "\n", 1);
    ft_putnbr_base(42, "01234567");   // Octal representation
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif");  // Custom base
    write(1, "\n", 1);
    return 0;
}