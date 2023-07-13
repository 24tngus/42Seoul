/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:29:21 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 15:18:36 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*dest;
	char	*dest2;
	char	*src;
	char	s1[30] = "exercise 02";
	char	s2[30] = "exercise 02";
	char	s3[6] = "#####";
	unsigned int	size;

	dest = s1;
	dest2 = s2;
	src = s3;
	size = 2;
	printf("%s : ft_strncat\n", ft_strncat(dest, src, size));
	printf("%s : strncat\n", strncat(dest2, src, size));
}
