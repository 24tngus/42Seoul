/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printftest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohykim <soohykim@student.42Seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:54:19 by soohykim          #+#    #+#             */
/*   Updated: 2023/06/27 16:16:52 by soohykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_print_string(char *s, int *len)
{
	if (!s)
		s = "(null)";
	while (*s)
		*len += write(1, s++, 1);
}

void	ft_print_digit(long long int num, int base, int *len)
{
	char	*hex = "0123456789abcedf";

	if (num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		ft_print_digit((num / base), base, len);
	*len += write(1, &hex[num % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int	len;

	len = 0;
	va_list p;
	va_start(p, format);
	while (*format)
	{
		if (*format == '%' && ((*(format + 1) == 'd') || (*(format + 1) ==
						'x') || (*(format + 1) == 's')))
		{
			format++;
			if (*format == 's')
				ft_print_string(va_arg(p, char *), &len);
			else if (*format == 'd')
				ft_print_digit((long long int)va_arg(p, int), 10, &len);
			else if (*format == 'x')
				ft_print_digit((long long int)va_arg(p, unsigned int), 16, &len);
		}
		else 
			len += write(1, format, 1);
		format++;
	}
	return (va_end(p), len);
}

#include <stdio.h>

int main(void)
{
	char			*s;
	char			*ns;
	int				d;
	int				x;

	s = "abcde";
	ns = NULL;
	d = -11111111;
	x = 11;
	ft_printf("<ft_printf>\ns = %s\n s가 NULL일 경우 = %s\n", s, ns);
	ft_printf("d = %d\n", d);
	ft_printf("x = %x\n", x);
	printf("----------------------------------------------------------------\n");
	printf("<printf>\ns = %s\n s가 NULL일 경우 = %s\n", s, ns);
	printf("d = %d\n", d);
	printf("x = %x\n", x);
}
