/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:12:41 by soohykim          #+#    #+#             */
/*   Updated: 2023/02/02 21:25:44 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *lt;

	lt->next=NULL;
	lt = (t_list *)malloc(sizeof(t_list));
	while (lt)
	{
		lt->next = NULL;
		lt->data = data;;
	}
	return (lt);
}
