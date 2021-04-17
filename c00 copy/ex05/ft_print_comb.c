/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:04:26 by smancini          #+#    #+#             */
/*   Updated: 2021/04/10 20:00:23 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int digit[3];

	digit[0] = 48;
	while (digit[0] <= 57)
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= 57)
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= 57)
			{
				ft_putchar(digit[0]);
				ft_putchar(digit[1]);
				ft_putchar(digit[2]);
				if (!(digit[0] == '7' && digit[1] == '8' && digit[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
