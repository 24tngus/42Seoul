/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 07:59:54 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/27 19:45:45 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("0 is prime? 답 0 --> %d\n", ft_is_prime(0));
	printf("2 is prime? 답 1 --> %d\n", ft_is_prime(2));
	printf("4 is prime? 답 0 --> %d\n", ft_is_prime(4));
	printf("127 is prime? 답 1 --> %d\n", ft_is_prime(127));
	printf("1111 is prime? 답 1 --> %d\n", ft_is_prime(1117));
}
