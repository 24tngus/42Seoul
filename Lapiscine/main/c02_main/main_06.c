/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:16:36 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/20 20:50:02 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char str1[] = "\n";
    char str2[] = "exercise 06";
    char str3[] = "";
    printf("%d : 0 나오면 답\n", ft_str_is_printable(str1));
    printf("%s 입력\n", str2);
    printf("%d : 1 나오면 답\n", ft_str_is_printable(str2));
    printf("%s 비어있음\n", str3);
    printf("%d : 1 나오면 답\n", ft_str_is_printable(str3));
}
