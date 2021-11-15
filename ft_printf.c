/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:49 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 16:05:10 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;

	index = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			if (ft_parse(args, format[index + 1]) == 0)
				ft_putchar(format[index + 1]);
			index++;
		}
		else
			ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (0);
}

/*
int	main(void)
{
	printf("Salut %f %d\n", 3.5, 10 / 3);
	// ft_printf("Salut %d\n", 10 / 3);
}
*/