/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:14:55 by almorene          #+#    #+#             */
/*   Updated: 2023/08/28 16:59:30 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *source)
{
	char	*ptr;

	ptr = dest;
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
	return (ptr);
}
/*int main (void)
{
	char srce[] = "alvarolosacara";
	char dsc[20] = "";

	
	
	ft_strcpy(dsc, srce);
	printf("%s\n%s\n", dsc, srce);
	
	return(0);
}*/
