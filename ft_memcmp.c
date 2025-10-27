/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:14:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/27 19:41:27 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ss1;
	char	*ss2;
	int		i;

	if (!n)
		return (0);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	i = -1;
	while (n-- && ++i >= 0)
		if (ss1[i] != ss2[i])
			break ;
	return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
}
