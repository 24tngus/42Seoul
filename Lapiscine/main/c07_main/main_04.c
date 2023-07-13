/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:16:31 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/29 14:27:23 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);
int ft_error_base(char *base);
int ft_atoi_str(char *str, int *s);
char    ft_index_str(char c, char *base);
int ft_atoi_base(char *str, char *base);

int ft_base_size(long long nbr, int n);
char    *ft_putnbr_base(long long nbr, char *base);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("%s\n", ft_convert_base("--2147483648", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("  +2147483647", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("-0", "0123456789", "01"));
}
