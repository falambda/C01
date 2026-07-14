/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwahab-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 21:03:32 by fwahab-d          #+#    #+#             */
/*   Updated: 2026/07/14 12:44:51 by fwahab-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index <= (size - 1) / 2)
	{	
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}
