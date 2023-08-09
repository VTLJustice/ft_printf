/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:11:04 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 21:01:07 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long int n, char format)
{
	char				*base;
	unsigned int		nbr_len;

	base = "0123456789abcdef";
	nbr_len = 0;
	if (format == 'p')
	{
		write(1, "0x", 2);
		nbr_len += 2;
	}
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_writenum(n / 16, base);
		ft_writenum(n % 16, base);
	}
	else
		write(1, &base[n], 1);
	nbr_len = nbr_len + ft_hnbrlen(n);
	return (nbr_len);
}
