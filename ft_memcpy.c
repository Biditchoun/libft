/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:54:41 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/19 18:31:55 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;
	int		i;

	pd = (char *)dest;
	ps = (char *)src;
	i = -1;
	while (n-- > 0 && ++i > INT_MIN)
		pd[i] = ps[i];
	return (dest);
}
