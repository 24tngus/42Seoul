/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:02:02 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 20:04:51 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "exercise 00";
	s2 = "exercise 0";
	printf("%d : ft_strcmp\n", ft_strcmp(s1, s2));
	printf("%d : strcmp\n", strcmp(s1, s2));
	printf("두 값이 같으면 정답\n");
}
