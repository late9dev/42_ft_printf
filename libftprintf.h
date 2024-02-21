/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:41:58 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 08:46:55 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_handle_format(const char format, va_list args);
int	ft_printf(const char *, ...);
int	ft_printf_c(int c);
int	ft_printf_s(char *s);
int	ft_printf_p(void *p);
int	ft_printf_n(int n);
int	ft_printf_u(unsigned int n);
int	ft_printf_h(unsigned int h, const char format);
int	ft_printf_percent(void);

#endif
