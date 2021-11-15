/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:47 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 16:14:08 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
 * Includes 
 */
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

/*
 * Main 
 */
int		ft_printf(const char *a, ...);

/*
 * Parsing
 */
void	ft_parse_int(int value);
void	ft_parse_char(int c);
void	ft_parse_str(char *a);
void	ft_parse_small_hexa(int a);
void	ft_parse_large_hexa(int a);
int		ft_parse(va_list args, char c);

/*
 * Utils 
 */
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int nb);
void	ft_putnbr_base(int nbr, char *base);

#endif