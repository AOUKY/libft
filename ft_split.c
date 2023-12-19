/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:05:39 by haouky            #+#    #+#             */
/*   Updated: 2023/12/18 17:56:31 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cw(char const *s, char c)
{
	int	i;
	int	ct;
	int	n;

	i = 0;
	ct = 0;
	n = 1;
	while (s[i] != 0)
	{
		if (s[i] == c)
			n = 1;
		if (s[i] != c && n == 1)
		{
			ct++;
			n = 0;
		}
		i++;
	}
	return (ct);
}

static int	lw(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

void	fr(char **s, int i)
{
	while (i >= 0)
		free(s[i--]);
	free (s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		w;

	i = 0;
	w = cw(s, c); 
	str = malloc((w + 1) * sizeof(char *));
	if (str == 0)
		return (0);
	while (i < w)
	{
		while (*s == c)
			s++;
		str[i] = ft_substr(s, 0, lw(s, c));
		if (str[i] == 0)
		{
			fr(str, i);
			return (0);
		}
		s += lw(s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
