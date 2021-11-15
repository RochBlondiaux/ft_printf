/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:48:59 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 16:03:10 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_parse(va_list args, char c)
{
	if (c == 'd')
		ft_parse_int(va_arg(args, int));
	else if (c == 'c')
		ft_parse_char(va_arg(args, int));
	else if (c == 's')
		ft_parse_str(va_arg(args, char *));
	else
		return (0);
	return (1);
}