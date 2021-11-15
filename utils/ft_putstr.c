/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:21:07 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 15:26:46 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr(char *s)
{
	int	index;	

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		ft_putchar(s[index]);
		index++;
	}
}
