/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:49:55 by soohykim          #+#    #+#             */
/*   Updated: 2023/03/30 17:49:57 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	check;

	mem = (unsigned char *)s;
	check = (unsigned char)c;
	while (n > 0)
	{
		if (*mem == check)
			return (mem);
		mem++;
		n--;
	}
	return (0);
}
