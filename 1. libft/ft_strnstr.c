/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:50:29 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 02:04:50 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;

	if (!*needle)
		return ((char *)haystack);
	len2 = ft_strlen(needle);
	while (*haystack != 0 && len >= len2)
	{
		if (ft_strncmp(haystack, needle, len2) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
