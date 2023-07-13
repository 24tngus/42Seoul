/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:31 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:25:46 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "FIRST");
	ft_list_push_back(&list, "SECOND");
	printf("%s, %p\n", list->data, list->next);
	printf("%s, %p\n", list->next->data, list->next->next);
	return (0);
}
