/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 03:04:51 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 11:18:10 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_check(t_param *p)
{
	t_list	*cur;

	cur = p->map;
	if (map_check_line(p) == -1)
		return (1);
	p->win_x = p->x * (ft_strlen(cur->data) - 1);
	p->win_y = p->y * p->count;
	if (map_check_wall(p, p->count) == -1)
	{
		ft_printf_s("Error : Invalid Map (No Wall Enclosed) \n");
		return (1);
	}
	if (map_check_count(p) == -1)
	{
		ft_printf_s("Error : Invalid Map (Invalid Start / Exit / Collect) \n");
		return (1);
	}
	return (0);
}

int	map_check_line(t_param *p)
{
	t_list	*cur;
	int		len;
	int		len_next;

	cur = p->map;
	len = ft_strlen(cur->data);
	while (cur)
	{
		len_next = ft_strlen(cur->data);
		if (len != len_next)
		{
			ft_printf_s("Error : Invalid Map (Different Line Lengths) \n");
			return (-1);
		}
		cur = cur->next;
		p->count++;
	}
	if (p->count < 3)
	{
		ft_printf_s("Error : Invalid Map (Less than 3 Lines) \n");
		return (-1);
	}
	return (1);
}

int	map_check_wall(t_param *p, int end)
{
	int			count;
	t_list		*cur;

	count = 0;
	cur = p->map;
	while (cur)
	{
		if (check_wall(cur->data, count, end) == -1)
			return (-1);
		cur = cur->next;
		count++;
	}
	return (0);
}

int	check_wall(char *str, int count, int end)
{
	char	c;

	if (count == 0 || count == end - 1)
	{
		while (*str != '\n')
			if (*str++ != '1')
				return (-1);
	}
	else
	{
		if (*str != '1')
			return (-1);
		while (*str != '\n')
			c = *str++;
		if (c != '1')
			return (-1);
	}
	return (0);
}

int	map_check_count(t_param *p)
{
	t_list		*cur;
	char		*line;

	cur = p->map;
	while (cur)
	{
		line = cur->data;
		while (*line)
		{
			if (*line == 'C')
				p->coin++;
			else if (*line == 'E')
				p->exit++;
			else if (*line == 'P')
				p->player++;
			line++;
		}
		cur = cur->next;
	}
	if (p->player != 1 || p->exit != 1 || p->coin < 1)
		return (-1);
	return (0);
}
