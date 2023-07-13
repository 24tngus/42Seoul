/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_09.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:27:11 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/17 19:31:34 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before : %s\n", str);
	printf("After : %s\n답 : Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n", ft_strcapitalize(str));
}
