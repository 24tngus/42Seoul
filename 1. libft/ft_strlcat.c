/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:47:09 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 02:02:01 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize < len_d + 1)
		return (dstsize + len_s);
	if (dstsize >= len_d + 1)
	{
		while (*(src + i) != '\0' && len_d + i + 1 < dstsize)
		{
			*(dst + len_d + i) = *(src + i);
			i++;
		}
		*(dst + len_d + i) = '\0';
	}
	return (len_d + len_s);
}
