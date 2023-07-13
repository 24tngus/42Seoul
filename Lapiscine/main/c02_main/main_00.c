/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:00:45 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/23 00:02:36 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
    char dest1[] = "aaaaaaaaaaaaaaaaaaaaaaa";
	char dest2[] = "aaaaaaaaaaaaaaaaaaaaaaa";
    char src[] = "exercise00 is finished.";
    printf("%s : ft_strcpy\n", ft_strcpy(dest1, src));
    printf("%s : strcpy\n", strcpy(dest2, src));
}
