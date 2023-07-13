/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:36:51 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/15 20:39:55 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "hello world";

    printf("%s : Before\n", str);
    printf("%s : After\n", ft_strupcase(str));
}
