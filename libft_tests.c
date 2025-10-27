/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:42:07 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/27 23:28:56 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRN "\x1B[32m"
#define RED "\x1B[31m"
#define RST "\x1B[0m"
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <stdlib.h>

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
	//ft_memcpy(llun, llun,  5);
	//ft_memmove(llun, m0,  5);
	//ft_memmove(m0, llun,  5);
	//ft_memmove(llun, llun,  5);
	//ft_strlcpy(llun, "oui", 5);
	//ft_strlcpy(m0, llun, 5);
	//ft_strlcpy(llun, llun, 5);
	//ft_strlcpy(m0, llun, 0);
	//ft_strlcpy(llun, llun, 0);
	//ft_strlcat(llun, "oui", 5);
	//ft_strlcat(m0, llun, 5);
	//ft_strlcat(llun, llun, 5);
	//ft_strlcat(m0, llun, 0);
	//ft_strlcat(llun, llun, 0);
	//llun = ft_strchr(llun, 0);
	//llun = ft_strrchr(llun, 0);
	//i = ft_strncmp(llun, "oui", 5);
	//i = ft_strncmp("oui", llun, 5);
	//i = ft_strncmp(llun, llun, 5);
	//llun = ft_memchr(llun, 0, 1);
	//i = ft_memcmp(llun, m1, 3);
	//i = ft_memcmp(m1, llun, 3);
	//i = ft_memcmp(llun, llun, 3);
	//llun = ft_strnstr(m0, llun, 0);
	//llun = ft_strnstr(llun, m0, 5);
	//llun = ft_strnstr(llun, llun, 0);

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
	if (ft_memset(llun, ' ', 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, ' ', 0\n", llun);
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
	bzero(m0, (0));
	ft_bzero(m1, 0);
	if (memcmp(m0, m1, 100))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : \"    \\n\", 0\n");
	}
	ft_bzero(llun, 0);
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
	if (memcpy(llun, " ", 0) != ft_memcpy(llun, " ", 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, " ", 0\n", llun);
	}
	if (memcpy(" ", llun, 0) != ft_memcpy(" ", llun, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : " ", %s, 0\n", llun);
	}
	if (memcpy(llun, llun, 0) != ft_memcpy(llun, llun, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, %s, 0\n", llun, llun);
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
	if (memmove(llun, " ", 0) != ft_memmove(llun, " ", 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, " ", 0\n", llun);
	}
	if (memmove(" ", llun, 0) != ft_memmove(" ", llun, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : " ", %s, 0\n", llun);
	}
	if (memmove(llun, llun, 0) != ft_memmove(llun, llun, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, %s, 0\n", llun, llun);
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
	if (strlcpy(llun, "oui", 0) != ft_strlcpy(llun, "oui", 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, \"oui\", 0", llun);
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
	if (strlcat(llun, "oui", 0) != ft_strlcat(llun, "oui", 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf(RST "Sent parameters : %s, \"oui\", 0", llun);
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

	//strchr
	printf(RST "ft_strchr : ");
	check = 0;
	strcpy(s0, "Jambonfromagequiroule");
	s0[0] = 0;
	if (strchr(s0, 'a') != ft_strchr(s0, 'a'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\", 'a'\n");
	}
	if (strchr(s0, 0) != ft_strchr(s0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\", 0\n");
	}
	s0[0] = 'J';
	s0[3] = 0;
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'J'\n");
	}
	if (strchr(s0, 'a') != ft_strchr(s0, 'a'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'a'\n");
	}
	if (strchr(s0, 'm') != ft_strchr(s0, 'm'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'm'\n");
	}
	if (strchr(s0, 0) != ft_strchr(s0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 0\n");
	}
	if (strchr(s0, 'o') != ft_strchr(s0, 'o'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'o'\n");
	}
	s0[3] = 'b';
	if (strchr(s0, 'm') != ft_strchr(s0, 'm'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'm'\n");
	}
	if (strchr(s0, 'o') != ft_strchr(s0, 'o'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'o'\n");
	}
	if (strchr(s0, 'o' + 256) != ft_strchr(s0, 'o' + 256))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'o' + 256\n");
	}
	strcpy(s0, "JJambonfromagequiroule");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfroJmagequiroule");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromagequirouleJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJJmagequiroule");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJmJagequiroule");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJmagequirouleJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfromagequirouleJJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJgequirouleJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJgequirouleJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJJgequirouleJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJgequirouleiJJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'j'\n", s0);
	}
	strcpy(s0, "JJambonfromaJJgequirouleiJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJgequirouleiJJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJJgequirouleiJJ");
	if (strchr(s0, 'J') != ft_strchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
	if (strchr(s0, 'E') != ft_strchr(s0, 'E'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'E'\n", s0);
	}
	if (!check)
		printf(GRN "OK\n");

	//strrchr
	printf(RST "ft_strrchr : ");
	check = 0;
	strcpy(s0, "Jambonfromagequiroule");
	s0[0] = 0;
	if (strrchr(s0, 'a') != ft_strrchr(s0, 'a'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\", 'a'\n");
	}
	if (strrchr(s0, 0) != ft_strrchr(s0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\", 0\n");
	}
	s0[0] = 'J';
	s0[3] = 0;
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'J'\n");
	}
	if (strrchr(s0, 'a') != ft_strrchr(s0, 'a'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'a'\n");
	}
	if (strrchr(s0, 'm') != ft_strrchr(s0, 'm'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'm'\n");
	}
	if (strrchr(s0, 0) != ft_strrchr(s0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 0\n");
	}
	if (strrchr(s0, 'o') != ft_strrchr(s0, 'o'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jam\", 'o'\n");
	}
	s0[3] = 'b';
	if (strrchr(s0, 'm') != ft_strrchr(s0, 'm'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'm'\n");
	}
	if (strrchr(s0, 'o') != ft_strrchr(s0, 'o'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'o'\n");
	}
	if (strrchr(s0, 'o' + 256) != ft_strrchr(s0, 'o' + 256))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"Jambonfromagequiroule\", 'o' + 256\n");
	}
	strcpy(s0, "JJambonfromagequiroule");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfroJmagequiroule");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromagequirouleJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJJmagequiroule");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJmJagequiroule");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfroJmagequirouleJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "ambonfromagequirouleJJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJgequirouleJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJgequirouleJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJJgequirouleJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JambonfromaJgequirouleiJJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'j'\n", s0);
	}
	strcpy(s0, "JJambonfromaJJgequirouleiJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJgequirouleiJJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "JJambonfromaJJgequirouleiJJ");
	if (strrchr(s0, 'J') != ft_strrchr(s0, 'J'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J'\n", s0);
	}
	strcpy(s0, "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
	if (strrchr(s0, 'E') != ft_strrchr(s0, 'E'))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'E'\n", s0);
	}
	if (!check)
		printf(GRN "OK\n");

	//strncmp
	printf(RST "ft_strncmp : ");
	check = 0;
	s0[0] = s1[0] = 0;
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "");
	strcpy(s1, "J");
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "t");
	strcpy(s1, "");
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "J");
	strcpy(s1, "J");
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 3;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "Jambonnf");
	strcpy(s1, "Jambonnn");
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s1, "Jambonnf");
	strcpy(s0, "Jambonnn");
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "Jambonnf");
	strcpy(s1, "Jambonnn");
	s0[6] = s1[6] = 0;
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s1, "Jambonnf");
	strcpy(s0, "Jambonnn");
	s0[6] = s1[6] = 0;
	i = 0;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	bzero(s0, 100);
	bzero(s1, 100);
	strcpy(s0, "\x12\xfe\x65\x12\xbd\xde\xad");
	strcpy(s1, "\x12\x04");
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	i = 2;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	strcpy(s1, "\x12\xfe\x65\x12\xbd\xde\xad");
	strcpy(s0, "\x12\x04");
	i = 1;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	i = 2;
	if ((strncmp(s0, s1, i) < 0 && ft_strncmp(s0, s1, i) >= 0) || (!strncmp(s0, s1, i) && ft_strncmp(s0, s1, i)) || (strncmp(s0, s1, i) > 0 && ft_strncmp(s0, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	strcpy(s0, "oui");
	strcpy(s1, "oui");
	i = 0;
	if ((strncmp(llun, s1, i) < 0 && ft_strncmp(llun, s1, i) >= 0) || (!strncmp(llun, s1, i) && ft_strncmp(llun, s1, i)) || (strncmp(llun, s1, i) > 0 && ft_strncmp(llun, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if ((strncmp(s0, llun, i) < 0 && ft_strncmp(s0, llun, i) >= 0) || (!strncmp(s0, llun, i) && ft_strncmp(s0, llun, i)) || (strncmp(s0, llun, i) > 0 && ft_strncmp(s0, llun, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if ((strncmp(llun, llun, i) < 0 && ft_strncmp(llun, llun, i) >= 0) || (!strncmp(llun, llun, i) && ft_strncmp(llun, llun, i)) || (strncmp(llun, llun, i) > 0 && ft_strncmp(llun, llun, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if (!check)
		printf(GRN "OK\n");

	//memchr
	printf(RST "ft_memchr : ");
	check = 0;
	strcpy(s0, "Jambonfromagequiroule");
	m0[0] = 0;
	if (memchr(m0, 'a', 0) != ft_memchr(m0, 'a', 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\\0ambonfromagequiroule\", 'a', 0\n");
	}
	if (memchr(m0, 'a', 1) != ft_memchr(m0, 'a', 1))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\\0ambonfromagequiroule\", 'a', 1\n");
	}
	if (memchr(m0, 'a', 2) != ft_memchr(m0, 'a', 2))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\\0ambonfromagequiroule\", 'a', 2\n");
	}
	if (memchr(m0, 0, 0) != ft_memchr(m0, 0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\\0ambonfromagequiroule\", 0, 0\n");
	}
	if (memchr(m0, 0, 1) != ft_memchr(m0, 0, 1))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"\\0ambonfromagequiroule\", 0, 1\n");
	}
	strcpy(s0, "JJambonfromagequiroule");
	if (memchr(m0, 'J', 1) != ft_memchr(m0, 'J', 1))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J', 1\n", s0);
	}
	if (memchr(m0, 'J', 2) != ft_memchr(m0, 'J', 2))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J', 2\n", s0);
	}
	strcpy(s0, "JambonfroJmagequiroule");
	if (memchr(m0, 'J', 9) != ft_memchr(m0, 'J', 9))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J', 9\n", s0);
	}
	if (memchr(m0, 'J', 10) != ft_memchr(m0, 'J', 10))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 'J', 10\n", s0);
	}
	if (memchr(llun, 0, 0) != ft_memchr(llun, 0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", 0, 0\n", llun);
	}
	if (!check)
		printf(GRN "OK\n");

	//memcmp
	printf(RST "ft_memcmp : ");
	check = 0;
	memset(m0, ' ', 100);
	memset(m1, ' ', 100);
	m0[0] = m1[0] = 0;
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "");
	strcpy(s1, "J");
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "t");
	strcpy(s1, "");
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "J");
	strcpy(s1, "J");
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 3;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "Jambonnf");
	strcpy(s1, "Jambonnn");
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s1, "Jambonnf");
	strcpy(s0, "Jambonnn");
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s0, "Jambonnf");
	strcpy(s1, "Jambonnn");
	s0[6] = s1[6] = 0;
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(s1, "Jambonnf");
	strcpy(s0, "Jambonnn");
	s0[6] = s1[6] = 0;
	i = 0;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	bzero(s0, 100);
	bzero(s1, 100);
	strcpy(s0, "\x12\xfe\x65\x12\xbd\xde\xad");
	strcpy(s1, "\x12\x04");
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	i = 2;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	strcpy(s1, "\x12\xfe\x65\x12\xbd\xde\xad");
	strcpy(s0, "\x12\x04");
	i = 1;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	i = 2;
	if ((memcmp(m0, m1, i) < 0 && ft_memcmp(m0, m1, i) >= 0) || (!memcmp(m0, m1, i) && ft_memcmp(m0, m1, i)) || (memcmp(m0, m1, i) > 0 && ft_memcmp(m0, m1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : strings with \\x12 and other chars like that in it\n");
	}
	strcpy(s0, "oui");
	strcpy(s1, "oui");
	i = 0;
	if ((memcmp(llun, s1, i) < 0 && ft_memcmp(llun, s1, i) >= 0) || (!memcmp(llun, s1, i) && ft_memcmp(llun, s1, i)) || (memcmp(llun, s1, i) > 0 && ft_memcmp(llun, s1, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if ((memcmp(s0, llun, i) < 0 && ft_memcmp(s0, llun, i) >= 0) || (!memcmp(s0, llun, i) && ft_memcmp(s0, llun, i)) || (memcmp(s0, llun, i) > 0 && ft_memcmp(s0, llun, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if ((memcmp(llun, llun, i) < 0 && ft_memcmp(llun, llun, i) >= 0) || (!memcmp(llun, llun, i) && ft_memcmp(llun, llun, i)) || (memcmp(llun, llun, i) > 0 && ft_memcmp(llun, llun, i) <= 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if (!check)
		printf(GRN "OK\n");
	//yes, this was a litteral copy/paste of the strncmp tests. Thanks to the replace text feature for existing.

	//strnstr
	printf(RST "ft_strnstr : ");
	check = 0;
	strcpy(m0, "Jambonfromagequiroule toujours (ou pas) (ou si ?)");
	strcpy(m1, "");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, " ");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 22;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 23;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 24;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "J");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "bo");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 4;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 5;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "rom");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 7;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 8;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 9;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "Ja");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "Jam");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 3;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "?)");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 99;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, " ?)");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 99;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "b");
	s0[2] = 0;
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 4;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = INT_MAX;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m0, "aaaaab");
	strcpy(m1, "aaaab");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 4;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 5;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 6;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	s0[0] = 0;
	s1[0] = 0;
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	strcpy(m1, "a");
	i = 0;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 1;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	i = 2;
	if (strnstr(s0, s1, i) != ft_strnstr(s0, s1, i))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if (strnstr(llun, m0, 0) != ft_strnstr(llun, m0, 0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%s\", \"%s\", %i\n", s0, s1, i);
	}
	if (!check)
		printf(GRN "OK\n");

	//atoi
	printf(RST "ft_atoi : ");
	check = 0;
	strcpy(s0, "       -50a");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " \t\n\r\v\f+0952");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \" \\t\\n\\r\\v\\f+0952\"\n");
	}
	strcpy(s0, "   85 42");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, "   +85-42");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, "   --85 42");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, "   +-85 42");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, "   -+85 42");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -1aa");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -0bb");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " +1cc");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " a  9223372036854775807");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 19489384723948723948dd");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -19489384723948723948ee");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 9223372036854775809ff");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -9223372036854775809gg");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 9223372036854775808hh");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -9223372036854775808ii");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 9223372036854775807jj");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -9223372036854775807kk");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 9223372036854775806ll");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -9223372036854775806mm");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 1313131313131313nn");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -1313131313131313oo");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -2147483649pp");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 2147483648qq");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -2147483648rr");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " -000000000000000000123456789ss");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	strcpy(s0, " 00000000000000000000123456789tt");
	if (atoi(s0) != ft_atoi(s0))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameter : \"%s\"\n", s0);
	}
	if (!check)
		printf(GRN "OK\n");

	//calloc
	printf(RST "Calloc tests take a bit of time, just wait for around 15 seconds\n");
	printf(RST "ft_calloc : ");
	check = 0;
	void	*p0, *p1;
	int	j;
	i = 0;
	j = 0;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = 0;
	j = 1;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = 1;
	j = 0;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = 1;
	j = 1;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = 5;
	j = 5;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = -1337;
	j = 0;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	j = -1337;
	i = 0;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (memcmp(p0, p1, i * j))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	i = -1337;
	j = 1337;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	j = -1337;
	i = 1337;
	p0 = calloc(i, j);
	p1 = ft_calloc(i, j);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%i, %i\"\n", i, j);
	}
	free (p0);
	free (p1);
	size_t calloc_max = INT_MAX;
	calloc_max = calloc_max * 5 + 4;
	p0 = calloc(calloc_max, 1);
	p1 = ft_calloc(calloc_max, 1);
	if (memcmp(p0, p1, INT_MAX))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"%zu, 1\"\n", calloc_max);
	}
	free (p0);
	free (p1);
	p0 = calloc(1, INT_MAX * 5 + 4);
	p1 = ft_calloc(1, INT_MAX * 5 + 4);
	if (memcmp(p0, p1, INT_MAX))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"1, INT_MAX * 5 + 4\"\n");
	}
	free (p0);
	free (p1);
	p0 = calloc(1, INT_MAX * 5 + 5);
	p1 = ft_calloc(1, INT_MAX * 5 + 5);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"1, INT_MAX * 5 + 5\"\n");
	}
	free (p0);
	free (p1);
	p0 = calloc(INT_MAX * 5 + 5, 1);
	p1 = ft_calloc(INT_MAX * 5 + 5, 1);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"INT_MAX * 5 + 5, 1\"\n");
	}
	free (p0);
	free (p1);
	p0 = calloc(INT_MAX - 1, INT_MAX - 3);
	p1 = ft_calloc(INT_MAX - 1, INT_MAX - 3);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"INT_MAX - 1, INT_MAX - 3\"\n");
	}
	free (p0);
	free (p1);
	calloc_max = INT_MAX;
	calloc_max += 3;
	p0 = calloc(calloc_max, INT_MAX - 3);
	p1 = ft_calloc(calloc_max, INT_MAX - 3);
	if (p1)
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"INT_MAX + 3, INT_MAX - 3\"\n");
	}
	free (p0);
	free (p1);
	p0 = calloc(calloc_max, 2);
	p1 = ft_calloc(calloc_max, 2);
	if (memcmp(p0, p1, INT_MAX))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"INT_MAX + 3, 2\"\n");
	}
	free (p0);
	free (p1);
	p0 = calloc(2, calloc_max);
	p1 = ft_calloc(2, calloc_max);
	if (memcmp(p0, p1, INT_MAX))
	{
		if (!check)
			check = printf(RED "KO\n");
		printf (RST "Sent parameters : \"2, INT_MAX + 3\"\n");
	}
	free (p0);
	free (p1);
	if (!check)
		printf(GRN "OK\n");
}
