/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:55:09 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/18 09:25:14 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	printf("Coucou\\ntu vas bien ?  : Before\n");
	ft_putstr_non_printable(str);
	printf(" : After \n\n");
	printf("Coucou\\0atu vas bien ? : 답\n");
}

