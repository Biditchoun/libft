/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:30:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/11/04 18:39:50 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(long nn, int fd)
{
	char	c;

	if (nn > 9)
		putnbr(nn / 10, fd);
	c = nn % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nn;
	int		sign;

	sign = 0;
	if (n < 0)
		sign = write(fd, "-", 1);
	nn = n;
	nn *= 1 - 2 * sign;
	putnbr(nn, fd);
}
