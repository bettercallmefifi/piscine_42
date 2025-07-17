#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1,str++,1);
    }
}

int     ft_strcmp(char *str, char *src)
{
    int i = 0;
    while(str[i] == src[i] && str[i] != '\0')
    {
        i++;
    }
    return(str[i] - src[i]);
}

char **ft_str_sort(int argc, char **argv)
{
    char *buf;
	int i;

	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				buf = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = buf;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	char **mod = ft_str_sort(argc, argv);
	int i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}