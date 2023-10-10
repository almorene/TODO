/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:48:10 by almorene          #+#    #+#             */
/*   Updated: 2023/09/21 22:22:06 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	ng;
	int	resul;

	i = 0;
	ng = 1;
	resul = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ng *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		resul = resul * 10 + (str[i] - '0');
				i++;
	}
	return (resul * ng);
}
int main(void)
{
	char str[50] = "   ---+--+-5";
	printf("%d", ft_atoi(str));
	return(0);
}	
