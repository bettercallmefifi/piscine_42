/*#include <unistd.h>
int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
    {
        len++;
    }
    return(len);
}
int main(int argc, char **argv)
{
    int i = ft_strlen(argv[1]) - 1;
    int h;
    if(argc == 2)
    {
        while(i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i--;
        h = i;
        while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        i++;
        while(i <= h)
        {
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}*/
#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int i;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 126)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}