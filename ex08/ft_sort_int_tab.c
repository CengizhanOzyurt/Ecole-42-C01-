/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozyurt <cozyurt@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:48:20 by cozyurt           #+#    #+#             */
/*   Updated: 2023/07/23 11:33:45 by cozyurt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
