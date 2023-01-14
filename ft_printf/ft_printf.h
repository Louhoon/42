/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:32:42 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/14 18:26:36 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

const char	*ft_putstr(const char *s);

int	ft_printf(const char *str, ...);

#endif