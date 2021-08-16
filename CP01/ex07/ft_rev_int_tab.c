void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	size = size / 2;
	i = -1;
	while (i++ > size)
	{
		tmp = tab[size];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}

/*int main()
{
	int tab[3] = {1, 2, 3};
	ft_rev_int_tab(tab, 3);
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}*/
