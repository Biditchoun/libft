/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:42:07 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/22 19:55:42 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRN   "\x1B[32m"
#define RED   "\x1B[31m"
#define RST "\x1B[0m"
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>

int	main()
{
	int	check, i;
	char	m0[101], m1[101];

	char *llun;
	llun = NULL;
	//Uncomment each of those lines individually : each line should make your function crash.
	//i = ft_strlen(llun);
	//ft_memset(llun, ' ', 8);
	//ft_bzero(llun, 5);
	//ft_memcpy(m0, llun, 5);
	//ft_memcpy(llun, m0,  5);
	//ft_memmove(llun, m0,  5);
	//ft_memmove(m0, llun,  5);
	//ft_strlcpy(llun, "oui", 5);
	//ft_strlcpy(m0, llun, 5);
	//ft_strlcpy(llun, llun, 5);

	//isalpha
	printf ("ft_isalpha : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isalpha(i) && !isalpha(i)) || (!ft_isalpha(i) && isalpha(i)))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_isalpha(%d) = %d, isalpha(%d) = %d\n", i, ft_isalpha(i), i, isalpha(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//isdigit
	printf (RST "ft_isdigit : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isdigit(i) && !isdigit(i)) || (!ft_isdigit(i) && isdigit(i)))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_isdigit(%d) = %d, isdigit(%d) = %d\n", i, ft_isdigit(i), i, isdigit(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//isalnum
	printf (RST "ft_isalnum : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isalnum(i) && !isalnum(i)) || (!ft_isalnum(i) && isalnum(i)))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_isalnum(%d) = %d, isalnum(%d) = %d\n", i, ft_isalnum(i), i, isalnum(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//isascii
	printf (RST "ft_isascii : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isascii(i) && !isascii(i)) || (!ft_isascii(i) && isascii(i)))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_isascii(%d) = %d, isascii(%d) = %d\n", i, ft_isascii(i), i, isascii(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//isprint
	printf (RST "ft_isprint : ");
	check = 0;
	i = -5;
	while (++i < 130)
	{
		if ((ft_isprint(i) && !isprint(i)) || (!ft_isprint(i) && isprint(i)))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_isprint(%d) = %d, isprint(%d) = %d\n", i, ft_isprint(i), i, isprint(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//strlen
	printf(RST "ft_strlen : ");
	check = 0;
	char *s0 = "";
	if (ft_strlen(s0) != strlen(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "\"%s\" : ft_strlen = %lu, strlen = %lu\n", s0, ft_strlen(s0), strlen(s0));
	}
	char *s1 = "E";
	if (ft_strlen(s1) != strlen(s1))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "\"%s\" : ft_strlen = %lu, strlen = %lu\n", s1, ft_strlen(s1), strlen(s1));
	}
	char *s2 = "Jambonfromagequiroule VRAIMENT";
	if (ft_strlen(s2) != strlen(s2))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "\"%s\" : ft_strlen = %lu, strlen = %lu\n", s2, ft_strlen(s2), strlen(s2));
	}
	char *s3 = "Jambonfromagequiroule VRAIMENT\nSauf que factuellement, le jambom roule mal.";
	if (ft_strlen(s3) != strlen(s3))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "\"%s\" : ft_strlen = %lu, strlen = %lu\n", s3, ft_strlen(s3), strlen(s3));
	}
	char s4[4];
	s4[0] = '0';
	s4[1] = 'o';
	s4[2] = 0;
	s4[3] = '0';
	if (ft_strlen(s4) != strlen(s4))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "\"%s\" : ft_strlen = %lu, strlen = %lu\n", s4, ft_strlen(s4), strlen(s4));
	}
	if (!check)
		printf(GRN "OK\n");
	
	//memset
	printf(RST "ft_memset : ");
	check = 0;
	memset(m0, 0, 101);
	memset(m1, 0, 101);
	if (memcmp(memset(m0, 1337, 13), ft_memset(m1, 1337, 13), 14))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : empty buffer, 1337, 13\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, 42, 1), ft_memset(m1, 42, 1), 2))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : empty buffer, 42, 1\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, 5, (0)), ft_memset(m1, 5, 0), 1))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : empty buffer, 5, 0\n");
	}
	memset(m0, 0, 100);
	memset(m1, 0, 100);
	if (memcmp(memset(m0, -5, 100), ft_memset(m1, -5, 100), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : empty buffer[100], -5, 100\n");
	}
	if (!check)
		printf(GRN "OK\n");

	//bzero
	printf(RST "ft_bzero : ");
	check = 0;
	strcpy(m0, "Jambonfromagequiroule");
	strcpy(m1, "Jambonfromagequiroule");
	bzero(m0, 30);
	ft_bzero(m1, 30);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"Jambonfromagequiroule\", 30\n");
	}
	strcpy(m0, "    \n");
	strcpy(m1, "    \n");
	bzero(m0, 30);
	ft_bzero(m1, 30);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"    \\n\", 30\n");
	}
	strcpy(m0, "    \n");
	strcpy(m1, "    \n");
	m0[2] = m1[2] = 0;
	bzero(m0, 30);
	ft_bzero(m1, 30);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"  \\0  \\n\", 30\n");
	}
	strcpy(m0, "    \n");
	strcpy(m1, "    \n");
	bzero(m0, 5);
	ft_bzero(m1, 5);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"    \\n\", 5\n");
	}
	strcpy(m0, "    \n");
	strcpy(m1, "    \n");
	bzero(m0, 1);
	ft_bzero(m1, 1);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"    \\n\", 1\n");
	}
	strcpy(m0, "    \n");
	strcpy(m1, "    \n");
	bzero(m0, 0);
	ft_bzero(m1, 0);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"    \\n\", 0\n");
	}
	if (!check)
		printf(GRN "OK\n");

	//memcpy
	printf(RST "ft_memcpy : ");
	check = 0;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "oui", 0), ft_memcpy(m1, "oui", 0), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 0\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "oui", 1), ft_memcpy(m1, "oui", 1), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 1\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "oui", 2), ft_memcpy(m1, "oui", 2), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 2\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "oui", 3), ft_memcpy(m1, "oui", 3), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 3\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "oui", 4), ft_memcpy(m1, "oui", 4), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 4\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "", 0), ft_memcpy(m1, "", 0), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"\", 0\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memcpy(m0, "", 1), ft_memcpy(m1, "", 1), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"\", 1\n");
	}
	//Overlap behaviour tests
	s0 = (char *)m0;
	s1 = (char *)m1;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(&s0[5], "Jambonfromagequiroule");
	strcpy(&s1[5], "Jambonfromagequiroule");
	if (memcmp(memcpy(m0, &s0[5], 8), ft_memcpy(m1, &s1[5], 8), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"     Jambonfromagequiroule\": s, &s[5], 8\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule");
	strcpy(s1, "Jambonfromagequiroule");
	if (memcmp(memcpy(&s0[5], m0, 8), ft_memcpy(&s1[5], m1, 8), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule\": &s[5], s, 8\n");
	}
	if (!check)
		printf(GRN "OK\n");

	//memmove
	printf(RST "ft_memmove : ");
	check = 0;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 0), ft_memmove(m1, "oui", 0), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 0\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 1), ft_memmove(m1, "oui", 1), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 1\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 2), ft_memmove(m1, "oui", 2), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 2\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 3), ft_memmove(m1, "oui", 3), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 3\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 4), ft_memmove(m1, "oui", 4), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 4\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "oui", 4), ft_memmove(m1, "oui", 4), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"oui\", 4\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "", 0), ft_memmove(m1, "", 0), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"\", 0\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	if (memcmp(memmove(m0, "", 1), ft_memmove(m1, "", 1), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : buffer[100] filled with ' ', \"\", 1\n");
	}
	s0 = (char *)m0;
	s1 = (char *)m1;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(&s0[5], "Jambonfromagequiroule");
	strcpy(&s1[5], "Jambonfromagequiroule");
	if (memcmp(memmove(m0, &s0[5], 8), ft_memmove(m1, &s1[5], 8), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"     Jambonfromagequiroule\": s, &s[5], 8\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule");
	strcpy(s1, "Jambonfromagequiroule");
	if (memcmp(memmove(&s0[5], m0, 8), ft_memmove(&s1[5], m1, 8), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule\": &s[5], s, 8\n");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule");
	strcpy(s1, "Jambonfromagequiroule");
	if (memcmp(memmove(m0, m0, 8), ft_memmove(m1, m1, 8), 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule\": s, s, 8\n");
	}
	if (ft_memmove(llun, llun, 8))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = %s: s, s, 8\n", llun);
	}
	if (!check)
		printf(GRN "OK\n");

	//strlcpy
	printf(RST "ft_strlcpy : ");
	check = 0;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "oui", 0) != ft_strlcpy(s1, "oui", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "oui", 1) != ft_strlcpy(s1, "oui", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "oui", 3) != ft_strlcpy(s1, "oui", 3) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 3");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "oui", 4) != ft_strlcpy(s1, "oui", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "oui", 5) != ft_strlcpy(s1, "oui", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "", 5) != ft_strlcpy(s1, "", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "", 1) != ft_strlcpy(s1, "", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcpy(s0, "", 3) != ft_strlcpy(s1, "", 3) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 3");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcpy(s0, "feur", 0) != ft_strlcpy(s1, "feur", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcpy(s0, "feur", 1) != ft_strlcpy(s1, "feur", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcpy(s0, "feur", 4) != ft_strlcpy(s1, "feur", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcpy(s0, "feur", 5) != ft_strlcpy(s1, "feur", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcpy(s0, "feur", 8) != ft_strlcpy(s1, "feur", 8) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 8");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcpy(s0, "feur", 0) != ft_strlcpy(s1, "feur", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcpy(s0, "feur", 1) != ft_strlcpy(s1, "feur", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcpy(s0, "feur", 4) != ft_strlcpy(s1, "feur", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcpy(s0, "feur", 5) != ft_strlcpy(s1, "feur", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcpy(s0, "feur", 8) != ft_strlcpy(s1, "feur", 8) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 8");
	}
	if (!check)
		printf(GRN "OK\n");

	//strlcat
	printf(RST "ft_strlcat : ");
	check = 0;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "oui", 0) != ft_strlcat(s1, "oui", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "oui", 1) != ft_strlcat(s1, "oui", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "oui", 3) != ft_strlcat(s1, "oui", 3) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 3");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "oui", 4) != ft_strlcat(s1, "oui", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "oui", 5) != ft_strlcat(s1, "oui", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"oui\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "", 5) != ft_strlcat(s1, "", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "", 1) != ft_strlcat(s1, "", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	if (strlcat(s0, "", 3) != ft_strlcat(s1, "", 3) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"Jambonfromagequiroule VRAIMENT TOUJOURS\": s, \"\", 3");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcat(s0, "feur", 0) != ft_strlcat(s1, "feur", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcat(s0, "feur", 1) != ft_strlcat(s1, "feur", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcat(s0, "feur", 4) != ft_strlcat(s1, "feur", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcat(s0, "feur", 5) != ft_strlcat(s1, "feur", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[1] = s1[1] = 0;
	if (strlcat(s0, "feur", 8) != ft_strlcat(s1, "feur", 8) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"J\": s, \"feur\", 8");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcat(s0, "feur", 0) != ft_strlcat(s1, "feur", 0) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 0");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcat(s0, "feur", 1) != ft_strlcat(s1, "feur", 1) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 1");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcat(s0, "feur", 4) != ft_strlcat(s1, "feur", 4) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 4");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcat(s0, "feur", 5) != ft_strlcat(s1, "feur", 5) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 5");
	}
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	strcpy(s0, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	s0[0] = s1[0] = 0;
	if (strlcat(s0, "feur", 8) != ft_strlcat(s1, "feur", 8) || memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : char *s = \"\": s, \"feur\", 8");
	}
	if (!check)
		printf(GRN "OK\n");

	//toupper
	printf(RST "ft_toupper : ");
	check = 0;
	i = -1;
	while (++i < 130)
	{
		if (toupper(i) != ft_toupper(i))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_toupper(%d) = %d, toupper(%d) = %d\n", i, ft_toupper(i), i, toupper(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");

	//tolower
	printf(RST "ft_tolower : ");
	check = 0;
	i = -1;
	while (++i < 130)
	{
		if (tolower(i) != ft_tolower(i))
		{
			if (!check)
				check = printf(RED "KO\n");
			printf (RST "ft_tolower(%d) = %d, tolower(%d) = %d\n", i, ft_tolower(i), i, tolower(i));
		}
	}
	if (!check)
		printf(GRN "OK\n");
}
