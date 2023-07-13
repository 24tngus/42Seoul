/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:46:30 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 01:57:58 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp;
	unsigned char	*value;

	temp = (unsigned char *)dst;
	value = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (len < 0)
		len *= -1;
	if (temp < value)
		while (len-- > 0)
			*temp++ = *value++;
	else if (temp > value)
		while (len-- > 0)
			*(temp + len) = *(value + len);
	return (dst);
}
