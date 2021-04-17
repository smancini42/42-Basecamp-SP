/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:49:34 by smancini          #+#    #+#             */
/*   Updated: 2021/04/10 20:09:49 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int dig1;
	int dig2;

	dig1 = 0;
	while (dig1 <= 98)
	{
		dig2 = dig1 + 1;
		while (dig2 <= 99)
		{
			ft_putchar(dig1 / 10 + 48);
			ft_putchar(dig1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(dig2 / 10 + 48);
			ft_putchar(dig2 % 10 + 48);
			if (dig1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			dig2++;
		}
		dig1++;
	}
}
