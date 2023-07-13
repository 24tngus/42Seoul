/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 04:33:34 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/29 13:29:06 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int	*arr2;
	int	min2;
	int max2;
	int	i;
	int	result;

	min2 = -6;
	max2 = 4;
	i = 0;
	result = ft_ultimate_range(&arr2, min2, max2);
	while (min2 < max2)
	{
		printf("최소 : -6, 최대 : 4 = %d\n", arr2[i]);
		i++;
		min2++;
	}
	printf("result = %d \n\n", result);
	min2 = 4;
	max2 = 0;
	i = 0;
	result = ft_ultimate_range(&arr2, min2, max2);
	printf("result = %d\n", result);
}
