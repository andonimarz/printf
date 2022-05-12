/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:23:29 by amarzana          #+#    #+#             */
/*   Updated: 2022/05/12 18:10:56 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoid(unsigned long n, char *base, int start)
{
	unsigned long	i;
	int				len;

	i = n;
	len = 0;
	if (n == 0)
		return (ft_putstr("0x0"));
	if (start)
		len += ft_putstr("0x");
	if (i > 15)
	{
		len += ft_putvoid(i / 16, base, 0);
		len += ft_putchar(base[i % 16]);
	}
	else
		len += ft_putchar(base[i]);
	return (len);
}
