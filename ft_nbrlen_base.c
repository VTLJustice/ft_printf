/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:32:28 by rradules          #+#    #+#             */
/*   Updated: 2023/08/01 18:47:43 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen_base(long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (long int)base)
	{
		n = n / base;
		i++;
	}
	return (i);
}
