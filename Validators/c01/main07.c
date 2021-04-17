/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:59:12 by smancini          #+#    #+#             */
/*   Updated: 2021/04/17 00:38:51 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
void	ft_rev_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	int size;
	
	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Inversa:  ");
	putarr(tab, size);
}