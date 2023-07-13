/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:16:38 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/15 18:52:21 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char str1[] = "exercise 03";
    char str2[] = "01234";
	char str3[] = "";
    printf("%s 입력\n", str1);
    printf("%d : 0 나오면 답\n", ft_str_is_numeric(str1));
    printf("%s 입력\n", str2);
    printf("%d : 1 나오면 답\n", ft_str_is_numeric(str2));
	printf("%s 비어있음\n", str3);
    printf("%d : 1 나오면 답\n", ft_str_is_numeric(str3));
}
