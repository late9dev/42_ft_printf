/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaswarlop <lucaswarlop@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:41:09 by lwarlop           #+#    #+#             */
/*   Updated: 2024/03/25 20:21:45 by lucaswarlop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(const char format, va_list args);

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
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			i++;
			printed_chars += ft_handle_format(format[i], args);
		}
		else
		{
			printed_chars += ft_print_char(format[i]);
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
		printed_chars += ft_print_char(va_arg(args, int));
	else if (format == 's')
		printed_chars += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		printed_chars += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		printed_chars += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		printed_chars += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		printed_chars += ft_print_hexa_lower(va_arg(args, unsigned int));
	else if (format == 'X')
		printed_chars += ft_print_hexa_upper(va_arg(args, unsigned int));
	else if (format == '%')
		printed_chars += ft_print_percent();
	else
		return (-1);
	return (printed_chars);
}
