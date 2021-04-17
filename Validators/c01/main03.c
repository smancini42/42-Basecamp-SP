/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:06:32 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:07:11 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a  = 5;
	int b  = 2;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("O Valor de a é: %d",*div);
	printf("\nO Valor de b é: %d",*mod);
}