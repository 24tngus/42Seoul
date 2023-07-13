/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:43:37 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/15 18:44:15 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char str1[] = "exercise 05";
    char str2[] = "ABCDE";
    char str3[] = "";
    printf("%s 입력\n", str1);
    printf("%d : 0 나오면 답\n", ft_str_is_uppercase(str1));
    printf("%s 입력\n", str2);
    printf("%d : 1 나오면 답\n", ft_str_is_uppercase(str2));
    printf("%s 비어있음\n", str3);
    printf("%d : 1 나오면 답\n", ft_str_is_uppercase(str3));
}
