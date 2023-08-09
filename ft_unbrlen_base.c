/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:02:01 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 18:13:44 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_unbrlen_base(unsigned long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long int)base)
	{
		n = n / base;
		i++;
	}
	return (i);
}
