/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:14:27 by haouky            #+#    #+#             */
/*   Updated: 2023/12/25 19:45:59 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*h;
	t_list	*t;
	void	*ha;

	if (!lst)
		return (0);
	h = 0;
	t = 0;
	while (lst)
	{
		ha = f(lst->content);
		t = ft_lstnew(ha);
		if (!t)
		{
			del(ha);
			ft_lstclear(&h, del);
			return (NULL);
		}
		ft_lstadd_back(&h, t);
		lst = lst->next;
	}
	return (h);
}
