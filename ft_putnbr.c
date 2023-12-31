/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:01:36 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 20:35:31 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long int n)
{
	int		nbr_len;
	char	*base;

	base = "0123456789";
	nbr_len = 0;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write(1, &base[n], 1);
	nbr_len = nbr_len + ft_nbrlen(n);
	return (nbr_len);
}
