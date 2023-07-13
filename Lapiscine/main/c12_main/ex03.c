/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:28 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:07:20 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

int	main(void)
{
	t_list	*list;

	list = ft_create_elem("FIRST");
	list->next = ft_create_elem("SECOND");
	list->next->next = ft_create_elem("THIRD");
	printf("%s, %p\n", ft_list_last(list)->data, ft_list_last(list)->next);
	return (0);
}
