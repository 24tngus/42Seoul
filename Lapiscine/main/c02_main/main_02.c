/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:00:29 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/21 20:12:44 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[] = "exercise";
	char str2[] = "01234";
	char str3[] = "";
    printf("%s 입력\n", str1);
    printf("%d : 1 나오면 답\n", ft_str_is_alpha(str1));
	printf("%s 입력\n", str2);
	printf("%d : 0 나오면 답\n", ft_str_is_alpha(str2));
	printf("%s 비어있음\n", str3);
    printf("%d : 1 나오면 답\n", ft_str_is_alpha(str3));
}
