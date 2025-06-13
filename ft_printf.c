/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:37:21 by nsantand          #+#    #+#             */
/*   Updated: 2024/12/07 15:29:30 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format(va_list args, char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		i += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		i += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_puthexlow(va_arg(args, int));
	else if (format == 'X')
		i += ft_puthexupp(va_arg(args, int));
	else if (format == '%')
		i += ft_putchar('%');
	else
		i = -1;
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count += format(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// int result;
// result = ft_printf("ft_printf Pointer: %p %p \n", 0, 0);
//ft_printf("Resultado del Pointer del ft_printf: %d\n", result);
//     printf("----------------------\n");

//     result = printf("printf Pointer: %p %p \n", 0, 0);
//     printf("Resultado del Pointer del ft_printf: %d\n", result);

// result = printf("printf INT_MIN: %d \n", INT_MIN);
// ft_printf("Resultado del INT_MIN del printf %d\n", result);
// printf("----------------------------\n");
// result = ft_printf("ft_printf macros: %d %d %d %d %d %d %d\n", INT_MAX,
		// INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// ft_printf("Resultado de los Macros del ft_printf %d\n", result);

// result = printf("printf macros: %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN,
		// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// ft_printf("Resultado del INT_MIN del printf %d\n", result);

//     return(0);
// }