/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:45:05 by mda-silv          #+#    #+#             */
/*   Updated: 2021/02/23 13:12:10 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	count;

	if (!s || !f || !(ptr = ft_strdup(s)))
		return (0);
	count = 0;
	while (ptr[count])
	{
		ptr[count] = f(count, ptr[count]);
		count++;
	}
	return (ptr);
}
