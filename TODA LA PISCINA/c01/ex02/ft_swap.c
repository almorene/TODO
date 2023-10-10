/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:59:31 by almorene          #+#    #+#             */
/*   Updated: 2023/08/25 12:09:58 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int main(void)
{
	int x = 10;
	int y = 5;

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return(0);
}*/
