/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:24:21 by smancini          #+#    #+#             */
/*   Updated: 2021/04/10 20:38:43 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2", 2);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-');
		ft_putnbr(-num);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr(num / 10);
		}
		ft_putchar(48 + num % 10);
	}
}
