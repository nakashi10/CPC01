/*#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
int main()
{
	int x = 23;
	int y = 11;
	int div = 55;
	int *p_div;
	p_div = &div;
	int mod = 33;
	int *p_mod;
	p_mod = &mod;
	printf("%d %d %d %d; ", x, y, *p_div, *p_mod);
	ft_div_mod(x, y, p_div, p_mod);
	printf("%d %d %d %d", x, y, *p_div, *p_mod);
	return 0;
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
