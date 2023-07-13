/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:19:18 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/28 11:52:38 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("-1! = 답 0 --> %d\n", ft_recursive_factorial(-1));
	printf("0! = 답 1 --> %d\n", ft_recursive_factorial(0));
	printf("4! = 답 24 --> %d\n", ft_recursive_factorial(30));
	printf("6! = 답 720 --> %d\n", ft_recursive_factorial(6));
}
