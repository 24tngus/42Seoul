/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_dfs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:26:51 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 11:24:08 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dfs(t_param *p)
{
	t_list		*cur;
	char		*line;
	char		**visit;

	cur = p->map;
	p->y = 0;
	visit = (char **)malloc(sizeof(char *) * (p->count + 1));
	while (cur)
	{
		p->x = 0;
		line = cur->data;
		visit[p->y] = (char *)malloc(sizeof(char) * (ft_strlen(line) + 1));
		while (*line)
			visit[p->y][p->x++] = *line++;
		p->y++;
		cur = cur->next;
	}
	dfs_recur(p, p->play_x, p->play_y, visit);
	if (p->coin != p->coin_check)
	{
		ft_printf_s("Error : Invalid Map Route\n");
		return (1);
	}
	free(visit);
	return (0);
}

int	dfs_recur(t_param *p, int x, int y, char **visit)
{
	if (x < 0 || x >= p->win_x || y < 0 || y >= p->win_y)
		return (0);
	if (visit[y][x] == '1')
		return (0);
	else if (visit[y][x] == 'E')
		return (0);
	else if (visit[y][x] != 'V')
	{
		if (visit[y][x] == 'C')
			p->coin_check++;
		visit[y][x] = 'V';
		dfs_recur(p, x - 1, y, visit);
		dfs_recur(p, x + 1, y, visit);
		dfs_recur(p, x, y - 1, visit);
		dfs_recur(p, x, y + 1, visit);
		return (1);
	}
	return (0);
}

int	file_name(char *file)
{
	int		i;
	char	*ext;

	i = 0;
	ext = ".ber";
	while (*(file + i) != '.')
		i++;
	while (*(file + i) || *ext)
	{
		if (*(file + i) != *ext)
			return (1);
		ext++;
		i++;
	}
	return (0);
}

void	ft_printf_s(char *s)
{
	size_t	i;
	char	c;

	i = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return ;
	}
	while (*(s + i))
	{
		c = *(s + i);
		write(1, &c, 1);
		i++;
	}
}

void	ft_printf_d(long long n)
{
	int		i;
	char	c[12];

	i = 0;
	if (n < 0)
	{
		c[0] = '-';
		write(1, &c, 1);
		n *= -1;
	}
	while (n >= 10)
	{
		c[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	c[i] = (n % 10) + 48;
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
	c[0] = '\n';
	write(1, &c, 1);
}
