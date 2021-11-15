/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:48:59 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 17:59:26 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_print(va_list args, char c)
{
	size_t	size;

	size = 0;
	if (c == 'd')
		size += ft_print_int(va_arg(args, int));
	else if (c == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (c == 's')
		size += ft_print_str(va_arg(args, char *));
	else if (c == 'x')
		size += ft_print_small_hexa(va_arg(args, int));
	else if (c == 'X')
		size += ft_print_large_hexa(va_arg(args, int));
	else if (c == 'u')
		size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		size += ft_print_pointer(va_arg(args, unsigned int));
	else
		return (0);
		printf("Size: %zu\n", size);
	return (size);
}
