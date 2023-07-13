/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:57:44 by soohykim          #+#    #+#             */
/*   Updated: 2023/04/06 02:07:43 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size++;
	else if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t		size;
	char		*str;
	long long	ln;

	size = ft_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ln = (long long)n;
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	if (ln == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (ln != 0)
	{
		str[size--] = ln % 10 + '0';
		ln /= 10;
	}
	return (str);
}
