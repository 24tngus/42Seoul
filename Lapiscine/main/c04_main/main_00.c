/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:00:35 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/18 12:05:18 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char s[30] = "exercise00 is finished";

	printf("%d : 정답 22 \n", ft_strlen(s));
}
