/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:03:44 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/23 15:32:30 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	rt;

	rt = -1;
	i = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			rt = i;
	if (!c)
		return ((char *)&s[i]);
	if (rt < 0)
		return (NULL);
	return ((char *)&s[rt]);
}

