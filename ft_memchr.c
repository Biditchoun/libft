/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:47:19 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/23 21:29:12 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	int		i;

	ss = (char *)s;
	if (!n)
		return (NULL);
	i = -1;
	while (n--)
		if (ss[++i] == (unsigned char)c)
			return ((void *)&ss[i]);
	return (NULL);
}
