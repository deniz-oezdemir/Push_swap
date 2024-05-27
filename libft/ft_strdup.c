/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:04:38 by denizozd          #+#    #+#             */
/*   Updated: 2023/11/16 16:52:54 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	l;

	l = ft_strlen(s) + 1;
	dst = malloc(l);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s, l);
	return (dst);
}
