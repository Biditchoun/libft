/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:08:02 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/11/04 18:12:38 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	int		i;

	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	rt = malloc(ft_strlen(s) + 1);
	if (!rt)
		return (NULL);
	i = -1;
	while (s[++i])
		rt[i] = f((unsigned int)i, s[i]);
	rt[i] = 0;
	return (rt);
}
