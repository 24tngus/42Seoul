/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:38:07 by soohykim          #+#    #+#             */
/*   Updated: 2023/02/01 16:41:21 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	c12[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
/*
	printf("----------answer----------\n");
	printf("%s\n", "00007ffee16ab3e0: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin\n00007ffee16ab3f0: 6368 6573 090a 0963 2020 6573 7420 666f ches...c  est fo\n00007ffee16ab400: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on \n00007ffee16ab410: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.\n00007ffee16ab420: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..\n00007ffee16ab430: 0a09 6c6f 6c2e 6c6f 6c0a 2000           ..lol.lol. .");
	printf("-------------------------\n");
	ft_print_memory((void *)c12, sizeof(c12));
	printf("----------output----------\n");
	*/
	ft_print_memory((void *)c12, 0);
}
