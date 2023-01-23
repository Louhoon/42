/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:32:42 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/23 15:18:24 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);

int	ft_printstr(const char *s);

int	ft_putnumber(int n);

int	ft_unsignedint(unsigned int n);

int	ft_print_char(char c);

int	ft_print_hexa(unsigned int n);

int	ft_print_uphexa(unsigned int n);

int	ft_print_ptr(unsigned long long pointer);

#endif