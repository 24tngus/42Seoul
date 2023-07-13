/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:27:28 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/21 16:04:55 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	d5[10] = "abcabcabc";
	char	d6[10] = "abcabcabc";
	char	d7[10] = "abcabcabc";
	char	d8[10] = "abcabcabc";
	char	*src;
	unsigned	int lcpy_return;

	src = "12345";
	printf("-----------answer------------\n");
	lcpy_return = strlcpy(d5, src, 3);
	printf("%d\n", lcpy_return);
	printf("%s\n", d5);
	printf("%s\n", &d5[6]);
	lcpy_return = strlcpy(d6, src, 8);
	printf("%d\n", lcpy_return);
	printf("%s\n", d6);
	printf("%s\n", &d6[6]);
	printf("-------------------------------\n");
	lcpy_return = strlcpy(d7, src, 3);
	printf("%d\n", lcpy_return);
	printf("%s\n", d7);
	printf("%s\n", &d7[6]);
	lcpy_return = strlcpy(d8, src, 8);
	printf("%d\n", lcpy_return);
	printf("%s\n", d8);
	printf("%s\n", &d8[6]);
	printf("-----------output------------\n\n");
}
