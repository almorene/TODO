/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:26:42 by almorene          #+#    #+#             */
/*   Updated: 2023/08/18 13:02:34 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	char	arr[5];
	int		d1;
	int		d2;

	d1 = 0;
	arr[2] = ' ';
	while (d1 <= 98)
	{
		arr[0] = d1 / 10 + '0';
		arr[1] = d1 % 10 + '0';
		d2 = d1 +1;
		while (d2 <= 99)
		{
			arr[3] = d2 / 10 + '0';
			arr[4] = d2 % 10 + '0';
			write (1, &arr, 5);
			if (d1 != 98)
			{
				write (1, ", ", 1);
			}
			d2++;
		}
	d1++;
	}
}
/*int main(void)
{
	ft_print_comb2();
	return(0);
}*/