/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:40:05 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/21 20:47:13 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_n_cpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src && dest)
	{
		i = -1;
		while (src[++i] && i < n)
			dest[i] = src[i];
		if (i >= n)
			i = n - 1;
		dest[i] = 0;
		return ;
	}
	while (src[i])
		i++;
	if (i >= n)
		i = n - 1;
	dest[i] = 0;
	while (--i + 1)
		dest[i] = src[i];
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	rt;

	if (!size)
		return (ft_strlen(src));
	rt = ft_strlen(src);
	str_n_cpy(dest, src, size);
	if (dest == src)
		return (size - 1);
	return (rt);
}
