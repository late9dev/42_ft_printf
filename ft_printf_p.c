/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:34:06 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 08:47:25 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_p_len(unsigned long p)
{
	int	len;

	len = 0;
	while (p != 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	ft_printf_p(void *p)
{
	int	printed_chars;

	printed_chars = write(1, "0x", 2);
	if (p == NULL)
		printed_chars += write(1, "0", 1);
	else
	{
		ft_putnbr_base((unsigned long)p, "0123456789adcdef");
		printed_chars += ft_p_len((unsigned long)p);
	}
	return (printed_chars);
}
