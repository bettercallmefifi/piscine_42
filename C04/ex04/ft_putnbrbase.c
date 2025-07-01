#include <unistd.h>

int doublechar(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i] != '\0')
	{
		j = i + 1;
		while(base[j] != '\0')
		{
			if(base[i] == base[j])
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

void	ft_putnbr_base(int nb, char *base)
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
	long long int nbr = nb;
	int i = 0;
	char rest[60];

	if(nbr == 0)
	{
		write(1,&base[0],1);
		return;
	}

	while(nbr < 0)
	{
		write(1,"-",1);
		nbr = -nbr;
	}
	while(nbr > 0)
	{
		rest[i] = base[nbr % base_value];
		nbr = nbr / base_value;
		i++;
	}
	i--;
	while(i >= 0)
	{
		write(1, &rest[i], 1);
		i--;
	}
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