/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 08:21:46 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/28 17:12:04 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("next prime -1 --> 답2 --> %d\n", ft_find_next_prime(-1));
	printf("next prime 4 --> 답5 --> %d\n", ft_find_next_prime(4));
	printf("next prime 120 --> 답 127 --> %d\n", ft_find_next_prime(120));
	printf("next prime 1280 --> 답 1283 --> %d\n", ft_find_next_prime(1280));
}
