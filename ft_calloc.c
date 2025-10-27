/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:16:44 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/27 23:30:27 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rt;
	size_t	calloc_max;

	calloc_max = INT_MAX;
	calloc_max = calloc_max * 5 + 4;
	if (nmemb * size > calloc_max
		|| (nmemb > calloc_max && size) || (nmemb && size > calloc_max))
		return (NULL);
	if (nmemb * size > INT_MAX)
	{
		nmemb = INT_MAX;
		size = 1;
	}
	rt = malloc(nmemb * size);
	if (!rt)
		return (NULL);
	ft_bzero(rt, nmemb * size);
	return (rt);
}
