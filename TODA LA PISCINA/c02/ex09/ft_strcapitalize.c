/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:12:16 by almorene          #+#    #+#             */
/*   Updated: 2023/08/27 19:43:40 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		c = str[i - 1];
		if (!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')
				|| (c >= 'A' && c <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	i++;
	c++;
	}
	return (str);
}
/*int main (void)
{
	char str[50] = "salut, coMMent tu vas ? 42mots quarante-deux; c+";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/			
