/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:01:11 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 18:37:59 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *format, ...);
int		ft_hex(unsigned long int n, char format);
int		ft_putunbr_base(unsigned long int n, const char *base);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_nbr(long int n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long int n, size_t base);
size_t	ft_nbrlen_base(long int n, size_t base);
int		ft_writenum(unsigned long int n, unsigned int nbr_len, char *base);

#endif
