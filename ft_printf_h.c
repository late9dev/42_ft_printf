/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:39:19 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 08:47:24 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_h(unsigned int h, const char format)
{
	if (format == 'x')
	{
		ft_putnbr_base(h, "0123456789abcdef");
		return (ft_nbrlen_base(h, 16));
	}
	else if (format == 'X')
	{
		ft_putnbr_base(h, "0123456789ABCDEF");
		return (ft_nbrlen_base(h, 16));
	}
	return (1);
}
