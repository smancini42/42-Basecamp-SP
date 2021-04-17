/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizejes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smancini <smancini@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:13:08 by smancini          #+#    #+#             */
/*   Updated: 2021/04/16 13:13:10 by smancini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
    int i;
    int check;

    i = -1;
    check = 1;
    while (str[++i] != '\0')
        if (str[i] > 64 && str[i] < 91)
            str[i] = (str[i] + 32);
    i = -1;
    while (str[++i] != '\0')
    {
        while (check == 1)
        {
            if (str[i] >= 97 && str[i] <= 122)
                str[i] = (str[i] - 32);
            check = 0;
        }
        if ((str[i] > -1 && str[i] < 48) || \
        (str[i] > 57 && str[i] < 65) || \
        (str[i] > 90 && str[i] < 97) || \
        (str[i] > 122 && str[i] <= 127))
            check = 1;
    }
    return (str);
}