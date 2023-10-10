/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_montaditos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:23:12 by almorene          #+#    #+#             */
/*   Updated: 2023/09/20 20:40:43 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void ft_montaditos(char numeroJugadores, int elazar)
//{



int main (void) 
{
	int minimo = 1;
	int maximo = 5;

	srand(time(NULL));

	int numeroAleatorio = minimo + rand() % (maximo - minimo + 1);

	printf("%d\n", numeroAleatorio);
	return(0);
}
