/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:35:24 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 02:00:27 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move(int key, t_param *p)
{
	if (key == W)
		move_up(p);
	else if (key == A)
		move_left(p);
	else if (key == S)
		move_down(p);
	else if (key == D)
		move_right(p);
	else if (key == ESC)
	{
		ft_printf_s("Exit : ESC");
		map_free(p);
		exit(0);
	}
	else
		return (1);
	map_set(p);
	return (0);
}

void	move_up(t_param *p)
{
	int			y;
	char		*line;
	t_list		*cur;
	char		*cur_prev;

	cur = p->map;
	y = p->play_y;
	while (y-- != 1)
		cur = cur->next;
	cur_prev = cur->data;
	cur = cur->next;
	line = cur->data;
	if (cur_prev[p->play_x] == '1')
		return ;
	else if (cur_prev[p->play_x] == 'E')
		if (map_exit(p))
			return ;
	if (cur_prev[p->play_x] == 'C')
		p->coin--;
	cur_prev[p->play_x] = 'P';
	line[p->play_x] = '0';
	init_player(p);
	ft_printf_d(p->move);
	p->move++;
}

void	move_left(t_param *p)
{
	int			y;
	char		*line;
	t_list		*cur;

	cur = p->map;
	y = p->play_y;
	while (y--)
		cur = cur->next;
	line = cur->data;
	if (line[p->play_x - 1] == '1')
		return ;
	else if (line[p->play_x - 1] == 'E')
		if (map_exit(p))
			return ;
	if (line[p->play_x - 1] == 'C')
		p->coin--;
	line[p->play_x - 1] = 'P';
	line[p->play_x] = '0';
	init_player(p);
	ft_printf_d(p->move);
	p->move++;
}

void	move_down(t_param *p)
{
	int			y;
	char		*line;
	t_list		*cur;
	char		*cur_next;

	cur = p->map;
	y = p->play_y;
	while (y--)
		cur = cur->next;
	line = cur->data;
	cur = cur->next;
	cur_next = cur->data;
	if (cur_next[p->play_x] == '1')
		return ;
	else if (cur_next[p->play_x] == 'E')
		if (map_exit(p))
			return ;
	if (cur_next[p->play_x] == 'C')
		p->coin--;
	line[p->play_x] = '0';
	cur_next[p->play_x] = 'P';
	init_player(p);
	ft_printf_d(p->move);
	p->move++;
}

void	move_right(t_param *p)
{
	int			y;
	char		*line;
	t_list		*cur;

	cur = p->map;
	y = p->play_y;
	while (y--)
		cur = cur->next;
	line = cur->data;
	if (line[p->play_x + 1] == '1')
		return ;
	else if (line[p->play_x + 1] == 'E')
		if (map_exit(p))
			return ;
	if (line[p->play_x + 1] == 'C')
		p->coin--;
	line[p->play_x + 1] = 'P';
	line[p->play_x] = '0';
	init_player(p);
	ft_printf_d(p->move);
	p->move++;
}
