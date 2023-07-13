/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:35:23 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 20:08:46 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	size;

	s1 = "exercise 00";
	s2 = "exercise 15";
	size = 12;
	printf("%d : ft_strncmp\n", ft_strncmp(s1, s2, size));
	printf("%d : strncmp\n", strncmp(s1, s2, size));
	printf("두 값이 같으면 정답\n");
}
