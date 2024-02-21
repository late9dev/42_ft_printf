/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:41:09 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 18:00:24 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		i;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			printed_chars += ft_handle_format(format[i], args);
		}
		else
		{
			printed_chars += ft_printf_c(format[i]);
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}

int	ft_handle_format(const char format, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	if (format == 'c')
		printed_chars += ft_printf_c(va_arg(args, int));
	else if (format == 's')
		printed_chars += ft_printf_s(va_arg(args, char *));
	else if (format == 'p')
		printed_chars += ft_printf_p(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		printed_chars += ft_printf_n(va_arg(args, int));
	else if (format == 'u')
		printed_chars += ft_printf_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printed_chars += ft_printf_h(va_arg(args, unsigned int), format);
	else if (format == '%')
		printed_chars += ft_printf_percent();
	return (printed_chars);
}
