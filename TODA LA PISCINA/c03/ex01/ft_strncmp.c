/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:51:23 by almorene          #+#    #+#             */
/*   Updated: 2023/08/29 17:39:14 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i] && s1[i] == s2[i]) && (i < n - 1))
	{
			i++;
	}
	return (s1[i] - s2[i]);
}
/*int main(void)
{
	char src[15] = "que pasa i";
	char dest[50] = "que pasa evaluador";
	unsigned int i;
	i = 10;
	
	printf("%d\n", ft_strncmp(src, dest, i));
	return(0);
}*/
