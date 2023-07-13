/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:31:00 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/15 18:43:31 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    char str1[] = "exercise 04";
    char str2[] = "abcde";
	char str3[] = "";
    printf("%s 입력\n", str1);
    printf("%d : 0 나오면 답\n", ft_str_is_lowercase(str1));
    printf("%s 입력\n", str2);
    printf("%d : 1 나오면 답\n", ft_str_is_lowercase(str2));
	printf("%s 비어있음\n", str3);
	printf("%d : 1 나오면 답\n", ft_str_is_lowercase(str3));
}
