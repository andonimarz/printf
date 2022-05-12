/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:29:11 by amarzana          #+#    #+#             */
/*   Updated: 2022/05/12 16:06:35 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	list;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_check_flag(list, str[++i]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}

int	ft_check_flag(va_list list, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	return (len);
}
