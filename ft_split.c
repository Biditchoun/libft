/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:55:23 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/30 19:20:19 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**llun_str()
{
	char	**rt;

	rt = malloc(sizeof(char *));
	if (!rt)
		return (NULL);
	rt[0] = NULL;
	return (rt);
}

static void	**ffree(void **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
	return (NULL);
}

static char	*add_string(const char *s, char c)
{
	char	*rt;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	rt = malloc(i + 1);
	if (!rt)
		return (NULL);
	ft_strlcpy(rt, s, i + 1);
	return (rt);
}

static char	**fill_strings(char **rt, const char *s, char c)
{
	int	i;
	int	nb_s;

	i = 0;
	nb_s = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			rt[nb_s] = add_string(&s[i], c);
		if (s[i] && !rt[nb_s++])
			return ((char **)ffree((void **)rt));
		while (s[i] && s[i] != c)
			i++;
	}
	rt[nb_s] = NULL;
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	char	**rt;
	int		nb_s;
	int		i;

	if (!s)
		return (llun_str());
	i = 0;
	nb_s = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			nb_s++;
		while (s[i] && s[i] != c)
			i++;
	}
	rt = malloc(sizeof(char *) * (nb_s + 1));
	if (!rt)
		return (NULL);
	if (!fill_strings(rt, s, c))
		return (NULL);
	return (rt);
}
