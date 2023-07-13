/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:05:08 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/27 19:43:39 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("-1! = 답 0 --> %d\n", ft_iterative_factorial(-1));
	printf("0! = 답 1 --> %d\n", ft_iterative_factorial(0));
	printf("4! = 답 24 --> %d\n", ft_iterative_factorial(4));
	printf("6! = 답 720 --> %d\n", ft_iterative_factorial(6));
}
