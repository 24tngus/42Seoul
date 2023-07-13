/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:41:36 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/30 00:33:07 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"My", "Name", "is", "soohyun", "!"};
	char	*sep = "+-+";
	char	*joined;
	joined = ft_strjoin(5, strs, sep);
	printf("ft_strjoin(5, strs, sep)\n");
	printf("%s\n\n", joined);
	joined = ft_strjoin(0, strs, sep);
	printf("ft_strjoin(0, strs, sep)\n");
	printf("%s\n", joined);
}
