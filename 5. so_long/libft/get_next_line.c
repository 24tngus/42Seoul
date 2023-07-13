/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:05:48 by soohykim          #+#    #+#             */
/*   Updated: 2023/06/21 14:02:23 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*make_line(char *backup, int j)
{
	char	*str;

	if (backup == NULL)
		return (NULL);
	if (backup[0] == '\0')
		return (NULL);
	while (backup[j] != '\n' && backup[j] != '\0')
		j++;
	if (backup[j] == '\n')
		str = malloc(sizeof(char) * (j + 2));
	else
		str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (0);
	j = 0;
	while (backup[j] != '\n' && backup[j] != '\0')
	{
		str[j] = backup[j];
		j++;
	}
	if (backup[j] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (str);
}

char	*cut_line(char *backup)
{
	int		i;
	char	*str;

	i = 0;
	if (backup == NULL)
		return (NULL);
	while (backup[i] != '\n' && backup[i] != '\0')
		i++;
	if (backup[i] == '\0')
	{
		free(backup);
		return (NULL);
	}
	if (backup[i] == '\n')
		i++;
	str = ft_strdup(&backup[i]);
	free(backup);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*readstr;
	static char	*backup[OPEN_MAX];
	char		*str;
	int			readsize;
	int			j;

	j = 0;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= OPEN_MAX)
		return (0);
	readstr = malloc((sizeof(char) * (BUFFER_SIZE + 1)));
	if (!readstr)
		return (0);
	while (!ft_strchr(backup[fd], '\n'))
	{
		readsize = read(fd, readstr, BUFFER_SIZE);
		if (readsize <= 0)
			break ;
		readstr[readsize] = '\0';
		backup[fd] = ft_strjoin(backup[fd], readstr);
	}
	str = make_line(backup[fd], j);
	backup[fd] = cut_line(backup[fd]);
	free(readstr);
	return (str);
}