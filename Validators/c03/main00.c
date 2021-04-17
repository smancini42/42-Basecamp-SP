/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:20:04 by smancini          #+#    #+#             */
/*   Updated: 2021/04/16 03:21:12 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char s1[] = "Teste";
	char s2[] = "Teste";
	char s3[] = "Teste Maior";

	printf("Diff12: %d, Diff21: %d, Diff13: %d, Diff31: %d, Diff23: %d, Diff32: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\n\ns12: %d, Diff21: %d, Diff13: %d, Diff31: %d, Diff23: %d, Diff32: %d", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1), strcmp(s2, s3), strcmp(s3, s2));
}