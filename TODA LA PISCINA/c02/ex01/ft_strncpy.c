/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:07:16 by almorene          #+#    #+#             */
/*   Updated: 2023/08/28 11:15:41 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;	

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*int main (void)
{
	char paptr[9] = "holaAmigo";
	char pasrc[9] = "aldub";


	unsigned int s;
	s = 8;
	ft_strncpy(pasrc, paptr, s);
	printf("%s", pasrc);
	return (0);
}*/
