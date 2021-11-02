/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:13:26 by mda-silv          #+#    #+#             */
/*   Updated: 2021/02/22 13:39:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_signal(int number, char *result)
{
	if (number == 0)
		result[0] = '0';
	else if (number < 0)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	aux;
	long	count;

	count = n < 1 ? 1 : 0;
	aux = count < 0 ? -(long)n : (long)n;
	while (aux)
	{
		aux /= 10;
		count++;
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (count + 1))))
		return (0);
	ptr[count] = '\0';
	aux = n < 0 ? -(long)n : (long)n;
	while (count >= 0)
	{
		ptr[count - 1] = aux % 10 + '0';
		aux /= 10;
		count--;
	}
	ft_signal(n, ptr);
	return (ptr);
}
