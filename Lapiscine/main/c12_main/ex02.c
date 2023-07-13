/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:18 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:05:33 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list	*list;

	list = ft_create_elem("FIRST");
	list->next = ft_create_elem("SECOND");
	printf("%d\n", ft_list_size(list));
	return (0);
}
