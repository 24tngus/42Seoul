/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:52:32 by soohykim          #+#    #+#             */
/*   Updated: 2023/03/30 17:53:26 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t		i;
	size_t		len;
	char		*trim;

	if (!s || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[i] != '\0' && ft_strchr(set, s[i]))
		i++;
	while (s[len - 1] != '\0' && len > 0 && ft_strchr(set, s[len - 1]))
		len--;
	if (i > len)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s[i], len - i + 1);
	return (trim);
}
