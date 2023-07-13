/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:42:00 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 11:28:44 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_read(t_param *p, char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_printf_s("Error : Read Fail or Invalid File name\n");
		return (1);
	}
	line = get_next_line(fd);
	if (line == NULL)
	{
		free(line);
		ft_printf_s("Error : Invalid Map (Empty Map)\n");
		return (1);
	}
	while (line != NULL)
	{
		map_strjoin(p, line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	return (0);
}

int	map_strjoin(t_param *p, char *line)
{
	t_list	*cur;
	t_list	*new;

	cur = p->map;
	new = malloc(sizeof(t_list));
	if (!new)
	{
		map_free(p);
		return (0);
	}
	new->data = ft_strdup(line);
	new->next = NULL;
	if (cur == NULL)
		p->map = new;
	else
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
	}
	return (1);
}

void	map_set(t_param *p)
{
	t_list		*cur;
	char		*line;

	p->x = 0;
	p->y = 0;
	cur = p->map;
	init_player(p);
	mlx_clear_window(p->mlx, p->win);
	while (cur)
	{
		line = cur->data;
		while (*line)
		{
			map_imgs(p, *line);
			line++;
			p->x += 64;
		}
		p->x = 0;
		p->y += 64;
		cur = cur->next;
	}
}

void	map_imgs(t_param *p, char c)
{
	if (c != '1' && c != '0' && c != 'C' && c != 'E' && c != 'P' \
		&& c != '\n' && c != '\0')
	{
		ft_printf_s("Error : Invalid Char\n");
		map_free(p);
		exit(0);
	}
	mlx_put_image_to_window(\
				p->mlx, p->win, p->img_map, p->x, p->y);
	if (c == '1')
		mlx_put_image_to_window(\
				p->mlx, p->win, p->img_wall, p->x, p->y);
	else if (c == '0')
		mlx_put_image_to_window(\
				p->mlx, p->win, p->img_map, p->x, p->y);
	else if (c == 'C')
		mlx_put_image_to_window(\
				p->mlx, p->win, p->img_coin, p->x, p->y);
	else if (c == 'E')
		mlx_put_image_to_window(\
				p->mlx, p->win, p->img_exit, p->x, p->y);
	else if (c == 'P')
		mlx_put_image_to_window(\
				p->mlx, p->win, p->img_mario, p->x, p->y);
}

void	map_free(t_param *p)
{
	t_list		*cur;
	t_list		*new;

	cur = p->map;
	while (cur)
	{
		new = cur->next;
		free (cur->data);
		free (cur);
		cur = new;
	}
	free (cur);
	exit(0);
}
