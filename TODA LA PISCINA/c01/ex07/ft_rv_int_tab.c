/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rv_int_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:35:19 by almorene          #+#    #+#             */
/*   Updated: 2023/08/25 12:06:39 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab( int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size) / 2)
	{
		aux = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = aux;
		i++;
	}
}
/*int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int c= 5;
    for(int i=0; i< c; i++)
	{
		printf("normal :%d\n", tab[i]);
	}
	
	ft_rev_int_tab(tab, c);
	
	//for(int i; i< c; i++)
	//{
		//printf("invertido :%d\n", tab[i]);
	//}
	int  i = 0;
	while(i < 5)
	{
		printf("invertido:%d\n", tab[i]);
		i++;
	}
	return(0);
}*/
