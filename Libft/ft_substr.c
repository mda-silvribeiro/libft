/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:51:48 by mda-silv          #+#    #+#             */
/*   Updated: 2021/02/23 13:28:53 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	count_s;
	size_t	aux;

	if (!s || !(ptr = (char *)malloc(len + 1)))
		return (0);
	count_s = start;
	aux = 0;
	while (count_s < ft_strlen(s) && aux < len)
		ptr[aux++] = s[count_s++];
	ptr[aux] = '\0';
	return (ptr);
}
