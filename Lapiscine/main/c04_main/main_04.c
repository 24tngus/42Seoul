/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:06:42 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/25 23:38:00 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("  --base에 문제가 있는 경우 : 출력되는 것이 없어야 함--\n");
	ft_putnbr_base(123, "");
	printf("\nnbr : 123, base : null\n");
	ft_putnbr_base(123, "1");
	printf("\nnbr : 123, base : 1\n");
	ft_putnbr_base(123, "1123");
	printf("\nnbr : 123, base : 1123\n");
	ft_putnbr_base(123, "-+123");
	printf("\nnbr : 123, base : -+123\n");

	printf("\n  --base에 문제가 없는 경우 : 출력되는 것이 있어야 함--\n");
	ft_putnbr_base(123, "01");
	printf("\n답 : 1111011, base : 01\n");
	ft_putnbr_base(123, "poneyvif");
	printf("\n답 : ofe, base : poneyvif\n");
	ft_putnbr_base(-123, "0123456789");
	printf("\n답 : -123, base : 0123456789\n");
	ft_putnbr_base(-123, "0123456789abcdef");
	printf("\n답 : -7b, base : 0123456789abcdef\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n답 : -10000000000000000000000000000000, base : 01\n");
	ft_putnbr_base(2147483647, "01");
}
