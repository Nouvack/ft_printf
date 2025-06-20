/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:19:43 by nsantand          #+#    #+#             */
/*   Updated: 2024/12/07 15:06:00 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n)
{
	int		i;
	int		count;
	int		arr[16];
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	i = 0;
	while (n > 0)
	{
		arr[i++] = hex[n % 16];
		n /= 16;
	}
	while (i > 0)
		count += ft_putchar(arr[--i]);
	return (count);
}

int	ft_puthexupp(unsigned int n)
{
	int		i;
	int		count;
	int		arr[16];
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0'));
	i = 0;
	while (n > 0)
	{
		arr[i++] = hex[n % 16];
		n /= 16;
	}
	while (i > 0)
		count += ft_putchar(arr[--i]);
	return (count);
}
