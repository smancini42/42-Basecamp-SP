/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:36:17 by smancini          #+#    #+#             */
/*   Updated: 2021/04/16 01:37:42 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if ((i == 0) && (str[c] >= 97) && (str[c] <= 122))
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 65 && str[c] <= 90))
		{
			str[c] += 32;
		}
		else if ((str[c] < 0) || (str[c] > 9 && str[c] < 65)
				|| (str[c] > 90 && str[c] < 97) || (str[c] > 122))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
