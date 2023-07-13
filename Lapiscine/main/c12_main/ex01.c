/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:05 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:26:53 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_front(&list, "THIRD");
	ft_list_push_front(&list, "SECOND");
	ft_list_push_front(&list, "FIRST");
	while (list)
	{
		printf("%s, %p\n", list->data, list->next);
		list = list->next;
	}
	return (0);
}
