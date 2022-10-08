/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:02:11 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/07 19:20:50 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif