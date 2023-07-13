/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:50:04 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 01:56:07 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*tmp;
	void	*d;

	if (!lst || !f)
		return (NULL);
	map = NULL;
	while (lst != NULL)
	{
		d = f(lst->content);
		tmp = ft_lstnew(d);
		if (!tmp)
		{
			if (del != NULL)
				del(d);
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, tmp);
		lst = lst->next;
	}
	return (map);
}
