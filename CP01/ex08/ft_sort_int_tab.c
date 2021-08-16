#include <unistd.h>
/*#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int	get_max_number(int *tab, int i, int max, int size);
int main()
{
	int tab[3] = {1,2,3};
	ft_sort_int_tab(tab, 3);
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	max;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		max = i;
		max = get_max_number(tab, i, max, size);
		printf("max:%d\n", max);
		if (!(max == i))
		{
			tmp = tab[max];
			tab[max] = tab[i];
			tab[i] = tmp;
		}
		i++;
	}
}

int	get_max_number(int *tab, int i, int max, int size)
{
	int	tmp;
	int	j;

	j = i;
	tmp = 0;
	while (j < size)
	{
		if (i == j)
			tmp = tab[j];
		else if (tab[j] > tmp)
		{
			tmp = tab[j];
			max = j;
		}
		printf("j:%d\n", j);
		j++;
	}
	return (max);
}
