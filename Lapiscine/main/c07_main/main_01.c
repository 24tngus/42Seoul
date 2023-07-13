/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 04:16:50 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/29 13:30:11 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int i;
	int	min;
	int	max;
	int *arr;

	i = 0;
	min = -6;
	max = 4;
	arr = ft_range(min, max);
	while (min < max)
	{
		printf("최소 : -6, 최대 : 4 = %d\n", arr[i++]);
		min++;
	}
	printf("\n\n");
	i = 0;
	min = 4;
	max = 0;
	arr = ft_range(min, max);
	printf("최소 : 4, 최대 : 0 = %d\n", arr[i]);

}
