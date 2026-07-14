/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahab-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 21:03:32 by fwahab-d          #+#    #+#             */
/*   Updated: 2026/07/14 15:47:31 by fwahab-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = size - 1;
	while (index != 0)
	{
		if (tab[index] < tab[index - 1])
		{
			tmp = tab[index];
			tab[index] = tab[index - 1];
			tab[index - 1] = tmp;
		}
		index--;
	}
}
