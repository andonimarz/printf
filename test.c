/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:47:25 by amarzana          #+#    #+#             */
/*   Updated: 2022/05/23 15:30:41 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	a[] = "janksdiadb";

	printf("\n---TEST---\n\nChar:\n");
	printf("printf: %c\n", 'T');
	ft_printf("ft_printf: %c\n\n", 'T');
	printf("%%:\nprintf: %%\n");
	ft_printf("ft_printf: %%\n\n");
	printf("String:\nprintf: %s\n", a);
	ft_printf("ft_printf: %s\n\n", a);
	printf("Void *\nprintf: %p\n", a);
	ft_printf("ft_printf: %p\n\n", a);
	printf("Decimal:\nprintf: %d\n", -12345);
	ft_printf("ft_printf: %d\n\n", -12345);
	printf("Integer:\nprintf: %i\n", -12345);
	ft_printf("ft_printf: %i\n\n", -12345);
	printf("Unsigned decimal:\nprintf: %u\n", 12345);
	ft_printf("ft_printf: %u\n\n", 12345);
	printf("Hex lower:\nprintf: %x\n", 152141323);
	ft_printf("ft_printf: %x\n\n", 152141323);
	printf("Hex upper:\nprintf: %X\n", 152141323);
	ft_printf("ft_printf: %X\n\n", 152141323);
	return (0);
}
