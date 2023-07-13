/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:38 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 20:19:30 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	arr1[50] = "exercise05";
	char	arr2[50] = "exercise05";
	char	*s1 = "is finished";
	char	*s2 = "is finished";

	printf("%u : ft_strlcat\n", ft_strlcat(arr1, s1, 9));
	printf("%lu : strlcat\n", strlcat(arr2, s2, 9));
}
