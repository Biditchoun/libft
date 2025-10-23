/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:33:49 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/23 22:15:06 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	rt;
	size_t	i;
	size_t	j;

	if (!size || ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	rt = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = -1;
	while (src[++j] && i < size - 1)
		dst[i++] = src[j];
	dst[i] = 0;
	return (rt);
}
