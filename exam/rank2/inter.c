/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:43:56 by soohykim          #+#    #+#             */
/*   Updated: 2023/06/27 11:31:20 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	index;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				index = -1;
				if (argv[1][i] == argv[2][j])
				{
					index = i;
					while (argv[1][--index] && index >= 0)
					{
						if (argv[1][index] == argv[1][i])
							break;
					}
					if (index < 0)
						ft_putchar(argv[1][i]);
					break;
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
}
