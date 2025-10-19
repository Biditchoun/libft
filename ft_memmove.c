/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:57:30 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/19 18:31:30 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	if (dest == src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	pd = (char *)dest;
	ps = (char *)src;
	while (--n >= 0)
		pd[n] = ps[n];
	return (dest);
}
