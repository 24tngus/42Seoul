/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:09:33 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/28 15:22:41 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("  --base에 문제가 있는 경우 : 0이 출력되야 함--\n");
	printf("%d", ft_atoi_base("123", ""));
	printf("\nnbr : 123, base : null\n");
	printf("%d", ft_atoi_base("123", "1"));
	printf("\nnbr : 123, base : 1\n");
	printf("%d", ft_atoi_base("123", "1123"));
	printf("\nnbr : 123, base : 1123\n");
	printf("%d", ft_atoi_base("123", "+123"));
	printf("\nnbr : 123, base : +123\n");

	printf("  --base에 문제가 없는 경우 : 출력되는 것이 있어야 함--\n");
	printf("%d", ft_atoi_base("offffffffff", "poneyvif"));
	printf("\n답: 2147483647, base : poneyvif\n");
	printf("%d", ft_atoi_base("10","0123456789abcdef"));
	printf("\n답: -1576723813, base : 0123456789abcdef\n");
	printf("%d", ft_atoi_base("    ----++--+-ungyeye", "jungyeki"));
	printf("\n답: -342373, base : jungyeki\n");
}
