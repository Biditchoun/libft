/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:53:47 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/23 17:20:48 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (!n)
		return (0);
	i = -1;
	while (n-- && (s1[++i] || s2[i]))
		if (s1[i] != s2[i])
			break ;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
