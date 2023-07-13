/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:34:45 by soohykim          #+#    #+#             */
/*   Updated: 2023/07/13 11:25:34 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define W			13
# define A			0
# define S			1
# define D			2
# define ESC		53
# define RED		17

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

# include "mlx/mlx.h"
# include "libft/get_next_line.h"

typedef struct s_list
{
	char			*data;
	struct s_list	*next;
}	t_list;

typedef struct s_param
{
	void		*mlx;
	void		*win;
	void		*img_mario;
	void		*img_map;
	void		*img_coin;
	void		*img_wall;
	void		*img_exit;
	t_list		*map;
	int			win_x;
	int			win_y;
	int			x;
	int			y;
	int			play_x;
	int			play_y;
	int			move;
	int			count;
	int			coin;
	int			coin_check;
	int			exit;
	int			player;
}	t_param;

void	ft_printf_s(char *s);
void	ft_printf_d(long long n);
int		file_name(char *file);
int		init(t_param *p);
void	init_player(t_param *p);
int		move(int key, t_param *p);
void	move_up(t_param *p);
void	move_left(t_param *p);
void	move_down(t_param *p);
void	move_right(t_param *p);
int		map_read(t_param *p, char *file);
int		map_strjoin(t_param *p, char *line);
void	map_set(t_param *p);
void	map_imgs(t_param *p, char c);
void	map_free(t_param *p);
int		map_exit(t_param *p);
int		map_red_exit(t_param *p);
int		map_check(t_param *p);
int		map_check_line(t_param *p);
int		map_check_wall(t_param *p, int end);
int		map_check_count(t_param *p);
int		check_wall(char *str, int count, int end);
int		dfs(t_param *p);
int		dfs_recur(t_param *p, int x, int y, char **visit);

#endif
