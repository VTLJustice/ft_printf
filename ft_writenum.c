/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:46:00 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 21:04:13 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writenum(unsigned long int n, char *base)
{
	if (n >= 16)
	{
		ft_writenum(n / 16, base);
		ft_writenum(n % 16, base);
	}
	else
		write(1, &base[n], 1);
	return (0);
}
