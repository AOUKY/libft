/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:11:54 by haouky            #+#    #+#             */
/*   Updated: 2023/12/24 12:04:58 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ne;

	ne = malloc (sizeof(t_list));
	if (ne == 0)
		return (0);
	ne->content = content;
	ne->next = 0;
	return (ne);
}
