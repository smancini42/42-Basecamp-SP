/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:12:56 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:14:47 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Aqui vai um belo texto";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}