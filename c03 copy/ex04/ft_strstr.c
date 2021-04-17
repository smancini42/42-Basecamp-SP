/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:52:33 by smancini          #+#    #+#             */
/*   Updated: 2021/04/16 18:35:33 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
