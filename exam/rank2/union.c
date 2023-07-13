/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uniontest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:11:28 by soohykim          #+#    #+#             */
/*   Updated: 2023/06/27 14:14:42 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *s, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_check(argv[1], argv[1][i], i))
				ft_putchar(argv[1][i]);
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (ft_check(argv[2], argv[2][j], j) && ft_check(argv[1],
						argv[2][j], i))
				ft_putchar(argv[2][j]);
			j++;
		}
	}
	ft_putchar('\n');
}
