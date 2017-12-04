/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:59:12 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/09 19:00:42 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && i == 0)
		{
			str[i] -= 32;
		}
		if (str[i] <= 47 || str[i] > 122 || (str[i] > 90 && str[i] < 97)
				|| (str[i] < 65 && str[i] > 57))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
