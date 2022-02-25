#include <unistd.h>

int main(int ac, char **av)
{
	int a[255] = {0};
	int i;
	int j;

	if(ac == 3)
	{
		i = 2;
		while(i > 0)
		{
			j = 0;
			while(av[i][j])
			{
				if(i == 2 && !a[(unsigned char)av[i][j]])
					a[(unsigned char)av[i][j]] = 1;
				else if(i == 1 && a[(unsigned char)av[i][j]] == 1)
				{	write(1, &av[i][j], 1);
					a[(unsigned char)av[i][j]] = 2;
				}
				j++;
			}
			i--;
		}
	}
	write(1,"\n", 1);
	return(0);
}