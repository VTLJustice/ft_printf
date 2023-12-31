/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:15:19 by rradules          #+#    #+#             */
/*   Updated: 2023/08/09 20:53:20 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	main(void)
{
	char	*x;

	x = "567";
	ft_printf("Hola me llamo %% %s %p\n", "Mmm", x);
	printf("Hola me llamo %% %s %p\n", "Mmm", x);
	ft_printf("%%%%%%%%%%%x %s %p\n", 45672, "Mmm", x);
	printf("%%%%%%%%%%%x %s %p\n", 45672, "Mmm", x);
	ft_printf("%d%d%d%d%d PPPPPAsZ<xkajpwhq w%s %i \n", 1, 3, 4, 6, 7, "M", 0);
	printf("%d%d%d%d%d PPPPPAsZ<xkajpwhq w%s %i \n", 1, 3, 4, 6, 7, "M", 0);
	ft_printf("This is an example %cspdiuxX%%.\n", 'c');
	printf("This is an example %cspdiuxX%%.\n", 'c');
	ft_printf("%c %s %p %d %i %u %X %X %X \n", 'O', "MG", x, 123, 567, 567, 5, 6, 7);
	printf("%c %s %p %d %i %u %x %x %x \n", 'O', "MG", x, 123, 567, 567, 5, 6, 7);
	ft_printf("%p\n%p\n", sizeof(size_t), sizeof(ptrdiff_t));
	printf("%p\n%p\n", sizeof(size_t), sizeof(ptrdiff_t));
	ft_printf("\001\002\007\v\010\f\r\n");
	printf("\001\002\007\v\010\f\r\n");
	ft_printf("%p\n", "");
	printf("%p\n", "");
	ft_printf(" %X \n", LONG_MAX);
	printf(" %X \n", LONG_MAX);
	ft_printf(" %X \n", 16);
	printf(" %X \n", 16);
	ft_printf(" %x \n", LONG_MIN);
	printf(" %x \n", LONG_MIN);
	ft_printf(" %x \n", ULONG_MAX);
	printf(" %x \n", ULONG_MAX);
	return (0);
}
