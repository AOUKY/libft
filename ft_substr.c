/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:27:43 by haouky            #+#    #+#             */
/*   Updated: 2023/12/16 19:02:23 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int st, size_t l)
{
	char	*c;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < st)
	{
		c = malloc(1);
		if (c == 0)
			return (0);
		c[0] = '\0';
		return (c);
	}
	while (s[st + i] != 0 && i < l)
		i++;
	c = malloc (i + 1);
	if (c == 0)
		return (0);
	i = 0;
	while (s[st + i] != 0 && i < l)
	{
		c[i] = s[st + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
