/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:08:12 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/30 16:37:38 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rt;
	int		i;
	int		j;
	int		l;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	l = ft_strlen(&s1[i]);
	j = 0;
	while (j < l && ft_strchr(set, s1[i + l - j - 1]))
		j++;
	rt = malloc(l - j + 1);
	if (!rt)
		return (NULL);
	ft_strlcpy(rt, &s1[i], l - j + 1);
	return (rt);
}
