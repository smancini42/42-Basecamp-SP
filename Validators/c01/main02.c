/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:04:20 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:05:19 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int i  = 10;
	int j  = 99;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i deveria ser 10 e eh : %u\n",*a);
	printf("j deveria ser 99 e eh : %u",*b);
}