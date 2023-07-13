/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:42:37 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/15 20:43:13 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char str[] = "HELLO WORLD";

    printf("%s : Before\n", str);
    printf("%s : After\n", ft_strlowcase(str));
}
