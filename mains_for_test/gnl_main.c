int		main(void)
{
	char *line;
	int	fd;

	fd = open("text", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return (0);
		printf("%s", line);
	}
}