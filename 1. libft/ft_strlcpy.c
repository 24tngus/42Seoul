/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:46:51 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 02:02:53 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	len_s;

	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	while (*src != '\0' && (dstsize - 1) > 0)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (len_s);
}
