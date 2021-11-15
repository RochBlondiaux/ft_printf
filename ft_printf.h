/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:47 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/15 18:05:51 by rblondia         ###   ########.fr       */
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
 * Printer
 */
int		ft_print_int(int value);
int		ft_print_char(int c);
int		ft_print_str(char *a);
int		ft_print_small_hexa(int a);
int		ft_print_large_hexa(int a);
int		ft_print_unsigned(unsigned int a);
size_t	ft_print(va_list args, char c);
int		ft_print_pointer(unsigned long int a);

/*
 * Utils 
 */
int		ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_putnbr(int nb);
void	ft_putnbr_base(int nbr, char *base);

#endif