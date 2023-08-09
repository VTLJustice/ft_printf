/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:46:00 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 18:45:00 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writenum(unsigned long int n, unsigned int nbr_len, char *base)
{
	unsigned long int	numbr;

	if (n < 16)
	{
		numbr = n % 16;
		write(1, &base[numbr], 1);
		nbr_len += 1;
	}
	else
	{
		ft_writenum((n / 16), nbr_len, base);
		numbr = n % 16;
		nbr_len += 1;
		write(1, &base[numbr], 1);
	}
	return (nbr_len);
}
