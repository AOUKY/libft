/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:03:58 by haouky            #+#    #+#             */
/*   Updated: 2023/12/16 16:14:44 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != 0)
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;
	char	*p;

	s = 0;
	e = ft_strlen(s1) - 1;
	while (s1[s] != 0 && chek(s1[s], set))
		s++;
	while (e >= s && chek(s1[e], set))
		e--;
	p = ft_substr(s1, s, (e - s + 1));
	return (p);
}
