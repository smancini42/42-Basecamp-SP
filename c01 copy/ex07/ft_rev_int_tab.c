/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:59:10 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 22:58:02 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int v;

	v = 0;
	while (v < size)
	{
		tmp = tab[v];
		tab[v++] = tab[size - 1];
		tab[size-- - 1] = tmp;
	}
}
