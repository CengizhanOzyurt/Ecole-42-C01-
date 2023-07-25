
void	ft_sort_int_tab(int *tab, int size)
{
	int	swp;
	int	numb;

	numb = 0;
	while (numb < (size - 1))
	{
		if (tab[numb] > tab[numb + 1])
		{
			swp = tab[numb];
			tab[numb] = tab[numb + 1];
			tab[numb + 1] = swp;
			numb = 0;
		}
		else
			numb++;
	}
}
