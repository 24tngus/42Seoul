/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:47:24 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 01:54:15 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;
	t_list	*next;

	clear = *lst;
	while (clear != NULL)
	{
		next = clear->next;
		if (del != NULL)
			del(clear->content);
		free(clear);
		clear = next;
	}
	*lst = NULL;
}
