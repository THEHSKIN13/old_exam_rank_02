#include <unistd.h>

int	main(int ac, char **av)

{
	int	a[255];
	int	i;
	int	j;

	i = 0;
	while (a[i])
		a[i++] = 0;
	if (ac == 3)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (a[(unsigned int)av[i][j]] == 0)
				{
					a[(unsigned int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}