/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:15:31 by almorene          #+#    #+#             */
/*   Updated: 2023/08/25 11:57:35 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
/*int	ft_strlen(char *str)
{
    char str [];
	int i;
	int contarletras = 0;
	int  contar = 0;
	i= 0;
	i ++;
	for (int i = 0; i < str; i++;)
	{
		contarletras += star[i];
	}
	int main()
	{
		char tsr2 = "hola";
		ft*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int	main(void)
{
	int c;
	c = 0;
	char	*palabra = "palabra";
	c = ft_strlen(palabra);
	printf("resultado: %d", c);
	return(0);
}*/	
