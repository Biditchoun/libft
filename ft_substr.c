/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:23:43 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/28 17:39:06 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*rt;

	if (!s)
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	slen = ft_strlen(&s[start]);
	if (len > slen)
		return (ft_strdup(&s[start]));
	rt = malloc(len + 1);
	if (!rt)
		return (NULL);
	ft_strlcpy(rt, &s[start], len + 1);
	return (rt);
}
