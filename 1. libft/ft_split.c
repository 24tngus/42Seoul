/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:48:23 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 11:20:41 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sub_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	*sub;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (*(s + len) != c && *(s + len))
		len++;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len > i)
	{
		*(sub + i) = *(s + i);
		i++;
	}
	*(sub + i) = '\0';
	return (sub);
}

static char	**ft_real_split(char const *s, char c, char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (count > i)
	{
		while (*s == c && *s)
			s++;
		*(split + i) = ft_sub_split(s, c);
		if (!*(split + i))
		{
			while (i--)
				free(*(split + i));
			free(split);
			return (NULL);
		}
		i++;
		while (*s != c && *s)
			s++;
	}
	*(split + count) = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**split;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (*(s + i))
	{
		if (*(s + i) == c)
			i++;
		else
		{
			count++;
			while (*(s + i) != c && *(s + i))
				i++;
		}
	}
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split = ft_real_split(s, c, split, count);
	return (split);
}
