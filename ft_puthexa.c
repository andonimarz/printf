/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:35:20 by amarzana          #+#    #+#             */
/*   Updated: 2022/05/12 17:40:28 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthexa((n / 16), base);
		len += ft_putchar(base[n % 16]);
	}
	else
		len += ft_putchar(base[n]);
	return (len);
}
