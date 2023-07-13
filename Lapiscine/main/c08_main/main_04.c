/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:18:02 by soohykim          #+#    #+#             */
/*   Updated: 2023/01/30 11:35:09 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

int	main(void)
{
    char *str[10] = {"abc","cdf","aaa","ahh"};
    t_stock_str *s_str;

	s_str = ft_strs_to_tab(4, str);
    ft_show_tab(s_str);
}
