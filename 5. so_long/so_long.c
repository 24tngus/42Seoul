/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:48:49 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 11:26:02 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init(t_param *p)
{
	p->mlx = mlx_init();
	p->img_coin = mlx_xpm_file_to_image(\
				p->mlx, "imgs/coin.xpm", &p->x, &p->y);
	p->img_exit = mlx_xpm_file_to_image(\
				p->mlx, "imgs/exit.xpm", &p->x, &p->y);
	p->img_map = mlx_xpm_file_to_image(\
				p->mlx, "imgs/map.xpm", &p->x, &p->y);
	p->img_mario = mlx_xpm_file_to_image(\
				p->mlx, "imgs/mario.xpm", &p->x, &p->y);
	p->img_wall = mlx_xpm_file_to_image(\
				p->mlx, "imgs/wall.xpm", &p->x, &p->y);
	p->map = NULL;
	p->move = 1;
	p->count = 0;
	p->coin = 0;
	p->coin_check = 0;
	p->exit = 0;
	p->player = 0;
	return (1);
}

void	init_player(t_param *p)
{
	t_list		*cur;
	char		*line;

	cur = p->map;
	p->play_x = 0;
	p->play_y = 0;
	while (cur)
	{
		line = cur->data;
		while (*line)
		{
			if (*line++ == 'P')
				return ;
			p->play_x++;
		}
		p->play_x = 0;
		p->play_y++;
		cur = cur->next;
	}
}

int	map_exit(t_param *p)
{
	if (p->coin == 0)
	{
		p->move++;
		ft_printf_d(p->move);
		ft_printf_s("Exit : GAME SUCCESS\n");
		map_free(p);
		exit(0);
		return (0);
	}
	return (1);
}

int	map_red_exit(t_param *p)
{
	ft_printf_s("Exit : Red Button");
	map_free(p);
	exit(0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_param		p;

	if (argc != 2 || file_name(argv[1]))
	{
		ft_printf_s("Error : Few argument or Invalid File Extenstion\n");
		return (-1);
	}
	if (init(&p) && map_read(&p, argv[1]))
		return (-1);
	if (map_check(&p))
	{
		map_free(&p);
		return (-1);
	}
	p.win = mlx_new_window(p.mlx, p.win_x, p.win_y, "so_long");
	map_set(&p);
	if (dfs(&p))
	{
		map_free(&p);
		return (-1);
	}
	mlx_key_hook(p.win, &move, &p);
	mlx_hook(p.win, RED, 0, &map_red_exit, &p);
	mlx_loop(p.mlx);
	return (0);
}
