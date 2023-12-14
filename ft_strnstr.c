/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:32:05 by haouky            #+#    #+#             */
/*   Updated: 2023/12/13 17:18:52 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find(const char *find, const char *str, size_t l)
{
	size_t	i;

	i = 0;
	while (find[i] == str[i] && find[i] != 0 && i < l)
		i++;
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	sz;

	i = 0;
	sz = ft_strlen(to_find);
	if (to_find[i] == 0)
	{
		return ((char *)str);
	}
	while (i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j = find (&to_find[j], &str[i], len - i);
			if (j == sz)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
