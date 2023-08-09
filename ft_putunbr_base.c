/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:01:36 by rradules          #+#    #+#             */
/*   Updated: 2023/08/01 18:48:27 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_base(unsigned long int n, const char *base)
{
	unsigned long int	base_len;
	int					nbr_len;

	nbr_len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr_base(n / base_len, base);
		ft_putunbr_base(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
	nbr_len = nbr_len + ft_unbrlen_base(n, base_len);
	return (nbr_len);
}
