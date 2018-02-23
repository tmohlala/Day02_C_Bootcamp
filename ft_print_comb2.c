void ft_putchar(char c);

void ft_print_comb2(void)
{
	int		a;
	char	b;
	char	c;

	a = 0;
	while (++a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (c < b)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar('0' + b / 10);
			ft_putchar('0' + b % 10);
			ft_putchar(' ');
			ft_putchar('0' + c / 10);
			ft_putchar('0' + c % 10);
		}
	}
}
