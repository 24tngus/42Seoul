/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:16:31 by soohykim          #+#    #+#             */
/*   Updated: 2023/06/27 14:44:30 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*s = malloc(10000), *c = s;
	while (read(fd, c, 1) > 0 && *c++ != '\n');
	return c > s ? (*c = 0, s) : (free(s), NULL);
}

#include <fcntl.h>
#include <stdio.h>

int main(void)
{
  int fd;
  char *line;

  fd = 0;
  fd = open("./test.txt", O_RDONLY);
  while ((line = get_next_line(fd)) != NULL)
  {
  	printf("%s", line);
	  free(line);
  }
  if (line == NULL)
		printf("%s\n", line);

  close(fd);

  return (0);
}
