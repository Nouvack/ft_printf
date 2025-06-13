/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:47:33 by nsantand          #+#    #+#             */
/*   Updated: 2024/12/07 14:56:58 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = write(1, "-2147483648", 11);
		return (i);
	}
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
	}
	n = (n % 10) + '0';
	i += write(1, &n, 1);
	return (i);
}

int	ft_putunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
	}
	n = (n % 10) + '0';
	i += write(1, &n, 1);
	return (i);
}
