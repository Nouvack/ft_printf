/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:25:02 by nsantand          #+#    #+#             */
/*   Updated: 2024/12/07 15:05:45 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int					i;
	int					count;
	unsigned long long	number;
	int					arr[16];
	char				*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	i = 0;
	number = (unsigned long long)ptr;
	count += ft_putstr("0x");
	while (number > 0)
	{
		arr[i++] = hex[number % 16];
		number /= 16;
	}
	while (i > 0)
		count += ft_putchar(arr[--i]);
	return (count);
}
