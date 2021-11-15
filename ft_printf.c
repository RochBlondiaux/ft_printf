/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:49 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 18:06:42 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				index;
	size_t			size;
	size_t			result;

	index = 0;
	va_start(args, format);
	size = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			result = ft_print(args, format[index + 1]);
			if (result == 0)
			{
				ft_putchar(format[index + 1]);
				size++;
			}
			size += result;
			index++;
		}
		else
		{
			ft_putchar(format[index]);
			size++;
		}
		index++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("X: %d\n", 12345);
}
