/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:38:05 by mda-silv          #+#    #+#             */
/*   Updated: 2021/02/23 14:13:05 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*from;
	size_t	idx;
	size_t	size;

	if (!(ptr = (char**)malloc(sizeof(char*) * ft_len(s, c) + 1)))
		return (0);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			from = (char*)s;
			while (*s && *s != c)
				++s;
			size = s - from + 1;
			if (!(ptr[idx] = (char*)malloc(size)))
				return (0);
			ft_strlcpy(ptr[idx++], from, size);
		}
		else
			++s;
	}
	ptr[idx] = 0;
	return (ptr);
}
