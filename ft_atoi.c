/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:44:50 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/27 19:43:42 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	rt;
	int					i;
	int					neg;
	int					p;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	neg = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			neg++;
	while (nptr[i] == '0')
		i++;
	p = 0;
	rt = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9' && ++p)
	{
		rt = rt * 10 + nptr[i++] - '0';
		if (rt > LLONG_MAX || p > 19)
			return (neg);
	}
	if (!neg)
		neg++;
	return ((int)(rt * -neg));
}
