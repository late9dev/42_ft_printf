/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:47:55 by lwarlop           #+#    #+#             */
/*   Updated: 2024/02/21 08:48:11 by lwarlop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char			*str;
	int				num;
	void			*ptr;
	char			non_printable;
	unsigned int	unum;

	str = "Test avec des caractères spéciaux : \n\t\\";
	non_printable = '\x7f';
	num = -12345;
	unum = 4294967295;
	ptr = &num;
	printf("Original printf : %s\n", str);
	ft_printf("Mon ft_printf : %s\n", str);
	printf("Original printf d'un caractère non imprimable : '%c'\n",
		non_printable);
	ft_printf("Mon ft_printf d'un caractère non imprimable : '%c'\n",
		non_printable);
	printf("Original printf d'une adresse : %p\n", ptr);
	ft_printf("Mon ft_printf d'une adresse : %p\n", ptr);
	printf("Original printf d'un pointeur NULL : %p\n", NULL);
	ft_printf("Mon ft_printf d'un pointeur NULL : %p\n", NULL);
	printf("Original printf d'un nombre avec largeur : '%10d'\n", num);
	ft_printf("Mon ft_printf d'un nombre avec largeur : '%10d'\n", num);
	printf("Original printf d'un nombre avec précision : '%.5d'\n", num);
	ft_printf("Mon ft_printf d'un nombre avec précision : '%.5d'\n", num);
	printf("Original printf d'un grand nombre signé négatif : '%d'\n", num);
	ft_printf("Mon ft_printf d'un grand nombre signé négatif : '%d'\n", num);
	printf("Original printf d'un grand nombre non signé en hexa (minuscules) : '%x'\n",
		unum);
	ft_printf("Mon ft_printf d'un grand nombre non signé en hexa (minuscules) : '%x'\n",
		unum);
	printf("Original printf d'un grand nombre non signé en hexa (majuscules) : '%X'\n",
		unum);
	ft_printf("Mon ft_printf d'un grand nombre non signé en hexa (majuscules) : '%X'\n",
		unum);
	printf("Original printf avec pourcentages : '%% %%'\n");
	ft_printf("Mon ft_printf avec pourcentages : '%% %%'\n");
	return (0);
}
