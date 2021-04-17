/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:56:02 by smancini          #+#    #+#             */
/*   Updated: 2021/04/10 21:56:04 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

int		is_valid_condition(char *cond);
int		rush(void);

int		main(int argc, char *argv[])
{
	if (argc != 2 || !(is_valid_condition(argv[1]) && rush()))
		write(1, "Error\n", 6);
	return (0);
}