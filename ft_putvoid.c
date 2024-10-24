/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:20:03 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/10/24 10:20:06 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printvoid(unsigned long int n)
{
	unsigned long int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_printvoid(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
	count++;
	return (count);
}

int	ft_putvoid(unsigned long long n)
{
	unsigned long long	v;

	v = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	v = ft_putstr("0x");
	v = v + ft_printvoid(n);
	return (v);
}
