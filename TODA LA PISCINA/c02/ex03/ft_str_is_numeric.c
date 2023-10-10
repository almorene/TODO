/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:58:12 by almorene          #+#    #+#             */
/*   Updated: 2023/08/27 19:04:21 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str [i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*int main(void)
{
	char str[10] = "a";
	printf("%d",ft_str_is_numeric(str));
	return(0);
}*/
