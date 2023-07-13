/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:29:34 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/27 19:44:28 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("0 ^ -1 = 답 0 --> %d\n", ft_iterative_power(0,-1));
	printf("0 ^ 0 = 답 1 --> %d\n", ft_iterative_power(0,0));
	printf("1 ^ 0 = 답 1 --> %d\n", ft_iterative_power(1,0));
	printf("2 ^ 5 = 답 32 --> %d\n", ft_iterative_power(2,5));
	printf("-3 ^ 3 = 답 -27 --> %d\n", ft_iterative_power(-3,3));
}
