/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:58:11 by almorene          #+#    #+#             */
/*   Updated: 2023/08/23 18:53:38 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h> 
/*#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
    int a = 10;
	int b = 2;
	int c;
	int d;
    int *div;
	int *mod;
	div = &c;
	mod = &d;	
	ft_div_mod(a, b, div, mod);
	printf("Dividendo : %d y el resto: %d", *div, *mod);
	return(0);
}*/
