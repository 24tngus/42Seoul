/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:40:34 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 20:39:59 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*cmp;

//	s1 = "exercise04 is finished";
//	s2 = "exercise04 is finished";
//	cmp = "04";

	s1 = "";
	s2 = "";
	cmp = "";
	printf("%s : ft_strstr\n", ft_strstr(s1, cmp));
	printf("%s : strstr\n", strstr(s2, cmp));
}
