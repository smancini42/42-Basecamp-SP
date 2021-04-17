/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:32:20 by smancini          #+#    #+#             */
/*   Updated: 2021/04/13 23:57:47 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "pneumoultramicroscopicossilicovulcanoconiotico";

	int count = ft_strlen(str);
	printf(ANSI_COLOR_GREEN "A palavra ");
	printf(ANSI_COLOR_RED "%s ", str);
	printf(ANSI_COLOR_GREEN "tem ");
	printf(ANSI_COLOR_RED "%d", count);
	printf(ANSI_COLOR_GREEN " caracteres\n" ANSI_COLOR_RESET);
}