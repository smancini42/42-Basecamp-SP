/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:03:34 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:21:01 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void	ft_ultimate_ft(int *********nbr);

int		main (void)
{
	int *********p_nbr;
	int ********p_nbr2;
	int *******p_nbr3;
	int ******p_nbr4;
	int *****p_nbr5;
	int ****p_nbr6;
	int ***p_nbr7;
	int **p_nbr8;
	int *p_nbr9;
	int nbr;

	nbr = 21;
	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	printf("%d\n", nbr);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}