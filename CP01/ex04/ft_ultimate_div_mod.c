/*#include <stdio.h>
void ft_ultiate_div_mod(int *a, int *b);
int main()
{
	int x = 23;
	int *p_x;
	p_x = &x;
	int y = 11;
	int *p_y;
	p_y = &y;
	printf("%d%d", *p_x, *p_y);
	ft_swap(p_x, p_y);
	printf("%d%d", *p_x, *p_y);
	return 0;
}*/

void	ft_ultiate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
