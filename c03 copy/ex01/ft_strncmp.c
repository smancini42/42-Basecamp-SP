/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:13:25 by smancini          #+#    #+#             */
/*   Updated: 2021/04/16 21:14:18 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}
