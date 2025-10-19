/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:42:07 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/19 19:55:15 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int	main()
{
	int	check, i;

	//isalpha
	printf ("ft_isalpha : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isalpha(i) && !isalpha(i)) || (!ft_isalpha(i) && isalpha(i)))
		{
			if (!check)
				check = printf("KO\n");
			printf ("ft_isalpha(%d) = %d, isalpha(%d) = %d\n", i, ft_isalpha(i), i, isalpha(i));
		}
	}
	if (!check)
		printf("OK\n");

	//isdigit
	printf ("ft_isdigit : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isdigit(i) && !isdigit(i)) || (!ft_isdigit(i) && isdigit(i)))
		{
			if (!check)
				check = printf("KO\n");
			printf ("ft_isdigit(%d) = %d, isdigit(%d) = %d\n", i, ft_isdigit(i), i, isdigit(i));
		}
	}
	if (!check)
		printf("OK\n");

	//isalnum
	printf ("ft_isalnum : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isalnum(i) && !isalnum(i)) || (!ft_isalnum(i) && isalnum(i)))
		{
			if (!check)
				check = printf("KO\n");
			printf ("ft_isalnum(%d) = %d, isalnum(%d) = %d\n", i, ft_isalnum(i), i, isalnum(i));
		}
	}
	if (!check)
		printf("OK\n");

	//isascii
	printf ("ft_isascii : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isascii(i) && !isascii(i)) || (!ft_isascii(i) && isascii(i)))
		{
			if (!check)
				check = printf("KO\n");
			printf ("ft_isascii(%d) = %d, isascii(%d) = %d\n", i, ft_isascii(i), i, isascii(i));
		}
	}
	if (!check)
		printf("OK\n");

	//isprint
	printf ("ft_isprint : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isprint(i) && !isprint(i)) || (!ft_isprint(i) && isprint(i)))
		{
			if (!check)
				check = printf("KO\n");
			printf ("ft_isprint(%d) = %d, isprint(%d) = %d\n", i, ft_isprint(i), i, isprint(i));
		}
	}
	if (!check)
		printf("OK\n");

	//strlen
	printf("ft_strlen : ");
	check = 0;
	char *s0 = "";
	if (ft_strlen(s0) != strlen(s0))
	{
		if (!check)
			check = printf("KO\n");
		printf ("\"%s\" : ft_strlen = %lu, strlen = %lu\n", s0, ft_strlen(s0), strlen(s0));
	}
	char *s1 = "E";
	if (ft_strlen(s1) != strlen(s1))
	{
		if (!check)
			check = printf("KO\n");
		printf ("\"%s\" : ft_strlen = %lu, strlen = %lu\n", s1, ft_strlen(s1), strlen(s1));
	}
	char *s2 = "Jambonfromagequiroule VRAIMENT";
	if (ft_strlen(s2) != strlen(s2))
	{
		if (!check)
			check = printf("KO\n");
		printf ("\"%s\" : ft_strlen = %lu, strlen = %lu\n", s2, ft_strlen(s2), strlen(s2));
	}
	char *s3 = "Jambonfromagequiroule VRAIMENT\nSauf que factuellement, le jambom roule mal.";
	if (ft_strlen(s3) != strlen(s3))
	{
		if (!check)
			check = printf("KO\n");
		printf ("\"%s\" : ft_strlen = %lu, strlen = %lu\n", s3, ft_strlen(s3), strlen(s3));
	}
	char s4[4];
	s4[0] = '0';
	s4[1] = 'o';
	s4[2] = 0;
	s4[3] = '0';
	if (ft_strlen(s4) != strlen(s4))
	{
		if (!check)
			check = printf("KO\n");
		printf ("\"%s\" : ft_strlen = %lu, strlen = %lu\n", s4, ft_strlen(s4), strlen(s4));
	}
	if (!check)
		printf("OK\n");
	
	//memset
	printf("ft_memset : ");
	char	m0[100], m1[100];
	check = 0;
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, 1337, 13), ft_memset(m1, 1337, 13), 14))
	{
		if (!check)
			check = printf("KO\n");
		printf("Sent parameters : empty buffer, 1337, 13\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, 42, 1), ft_memset(m1, 42, 1), 2))
	{
		if (!check)
			check = printf("KO\n");
		printf("Sent parameters : empty buffer, 42, 1\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, 5, (0)), ft_memset(m1, 5, 0), 1))
	{
		if (!check)
			check = printf("KO\n");
		printf("Sent parameters : empty buffer, 5, 0\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, -5, 100), ft_memset(m1, -5, 100), 100))
	{
		if (!check)
			check = printf("KO\n");
		printf("Sent parameters : empty buffer[100], -5, 100\n");
	}
	if (!check)
		printf("OK\n");

	//bzero
	printf("ft_bzero : ");
	strcpy(m0, "Jambonfromagequiroule");
	strcpy(m1, "Jambonfromagequiroule");

}
