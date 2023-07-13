/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:51:05 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 20:11:28 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*dest;
	char	*dest2;
	char	*src;
	char	s1[30] = "exercise 02";
	char	s2[30] = "exercise 02";
	char	s3[6] = "****";

	dest = s1;
	dest2 = s2;
	src = s3;
	printf("%s : ft_strcat\n", ft_strcat(dest, src));
	printf("%s : strcat\n", strcat(dest2, src));
}
