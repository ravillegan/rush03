extern	void	ft_putchar(char c);

void			rush(int x, int y)
{
	int i;
	int j;
	int mat[x][y];

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (j == 1 && (i == 1 || i == x))
				ft_putchar('A');
			if ((j == y && j != 1) && (i == 1 || i == x))
				ft_putchar('C');
			if (((i > 1 && i < x) && j == 1) || ((i == 1 && j > 1) && j < y) || ((i > 1 && i < x) && j == y) || ((i == x && j > 1) && j < y))
				ft_putchar('B');
			if ((i > 1 && i < x) && (j > 1 & j < y))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
