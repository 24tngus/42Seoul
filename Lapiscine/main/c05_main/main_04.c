/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:48:30 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/27 19:45:18 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("index -1 = 답 -1 --> %d\n", ft_fibonacci(-1));
	printf("index 0 = 답 0 --> %d\n", ft_fibonacci(0));
	printf("index 1 = 답 1 --> %d\n", ft_fibonacci(1));
	printf("index 2 = 답 1 --> %d\n", ft_fibonacci(2));
	printf("index 3 = 답 2 --> %d\n", ft_fibonacci(3));
	printf("index 4 = 답 3 --> %d\n", ft_fibonacci(4));
	printf("index 5 = 답 5 --> %d\n", ft_fibonacci(5));
	printf("index 7 = 답 13 --> %d\n", ft_fibonacci(7));
}
