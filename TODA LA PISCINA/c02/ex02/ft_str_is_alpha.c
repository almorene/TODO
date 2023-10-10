/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:30:57 by almorene          #+#    #+#             */
/*   Updated: 2023/08/27 18:26:45 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]
					<= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main (void)
{
	char strin[30] = "hola";	
	
	printf("%d", ft_str_is_alpha(strin));

	return(0);
}*/
