/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:22:30 by mda-silv          #+#    #+#             */
/*   Updated: 2021/02/22 09:36:57 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *dest;

	if (!(dest = (t_list *)malloc(sizeof(t_list))))
		return (0);
	dest->content = content;
	dest->next = 0;
	return (dest);
}
