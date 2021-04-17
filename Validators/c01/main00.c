/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:02:47 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:55:39 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void	ft_ft(int *nbr);

int		main (void)
{
	int *p_nbr;
	int nbr;

	nbr = 13;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf(ANSI_COLOR_GREEN "%d\n", nbr);
	printf(ANSI_COLOR_RESET);
	return (0);
}