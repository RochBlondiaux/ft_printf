/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:58:40 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 18:05:33 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int nb)
{
	int	size;

	size = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nb < 0)
	{
		size++;
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		size += ft_putnbr(nb / 10);
		size += ft_putnbr(nb % 10);
	}
	else
	{
		size ++;
		ft_putchar(nb + '0');
	}
	return (size);
}
