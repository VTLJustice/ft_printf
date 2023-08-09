/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:11:04 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 18:55:44 by rradules         ###   ########.fr       */
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
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_writenum(n, nbr_len, base);
	else
		ft_writenum(n, nbr_len, base);
	nbr_len = nbr_len + ft_unbrlen_base(n, 16);
	return (nbr_len);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	ft_hex(atoi(argv[1]), 'X');
	return (0);
}*/
