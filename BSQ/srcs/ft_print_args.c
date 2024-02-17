int	ft_print_args(int argc, char **argv)
{
	int	i;
	int	j;


	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j]!= '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
