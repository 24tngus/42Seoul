/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:15:58 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/31 16:40:07 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(void)
{
	char *s1;
	char *s2;
	char **words;
	
	s1 = "asdf2439#85723RETV#WYWER5w%^YW#$%6";
	s2 = "";
	words = ft_split(s1, s2);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("#1 - %s\n", *(words++));
	printf("\n");

	s1 = "asdf2439#85723RETV#WYWER5w%^YW#$%6";
	s2 = " ";
	words = ft_split(s1, s2);
	
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("#2 - %s\n", *(words++));
	printf("\n");

	s1 = "";
	s2 = "";
	words = ft_split(s1, s2);
	
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("#3 - %s\n", *(words++));
	printf("\n");

	s1 = "    ! asf as!adg asdf asf    asdf     ";
	s2 = " !";
	words = ft_split(s1, s2);
	
	if (!*words) printf("(bank)\n");
	while (*words)
		printf("#4 - %s\n", *(words++));
	printf("\n");

	s1 = " hi!my name!   is soon!hyung.";
	s2 = " ";
	words = ft_split(s1, s2);
	
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("#5 - %s\n", *(words++));
	printf("\n");
}
