#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int ft_strlen(char *s)
{
	int i;
	i = 0;

	while(s[i])
		i++;
	return(i);
}

char	*get_next_line(int fd)
{
	char	a[1000000];
	char	b[1];
	char	*line;
	int		i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	a[i] = '\0';
	while (read(fd, b, 1) == 1)
	{
		a[i] = b[0];
		a[i + 1] = '\0';
		if (a[i] == '\n')
			break ;
		i++;
	}
	if (a[0] == '\0')
		return (NULL);
	line = malloc(ft_strlen(a) + 1);
	i = 0;
	while (a[i])
	{
		line[i] = a[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}