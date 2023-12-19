/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:20:42 by haouky            #+#    #+#             */
/*   Updated: 2023/12/15 18:35:29 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*s;

	l = (ft_strlen(s1) + ft_strlen(s2) + 1);
	s = malloc(l);
	if (!s)
		return (0);
	ft_strlcpy(s, s1, l);
	ft_strlcat(s, s2, l);
	return (s);
}
