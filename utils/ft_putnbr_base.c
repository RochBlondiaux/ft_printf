/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:50:40 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/15 17:56:58 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_right_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	int			len;
	long		nb;

	len = ft_strlen(base);
	i = 0;
	nb = (long)nbr;
	if (ft_right_base(base) == 0)
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb < len)
	{
		ft_putchar(base[nb]);
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putchar(base[nb % len]);
	}
}
