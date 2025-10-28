/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:37:37 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/28 15:43:25 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rt;
	int		i;

	i = ft_strlen(s);
	rt = malloc(i + 1);
	if (!rt)
		return (NULL);
	ft_strlcpy(rt, s, i + 1);
	return (rt);
}
