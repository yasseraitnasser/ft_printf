/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:58:57 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:17:57 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	check_whats_next(char c, va_list args)
{
	int	result;

	result = 0;
	if (c == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (c == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		result += ft_putnbr_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		result += write(1, "%", 1);
	else if (c == 'u')
		result += ft_put_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		result += ft_put_adress(va_arg(args, void *));
	else
		result += write(1, &c, 1);
	return (result);
}

int	ft_printf(const char *message, ...)
{
	va_list	args;
	int		result;

	result = 0;
	va_start(args, message);
	while (*message)
	{
		if (*message == '%')
			result += check_whats_next(*(++message), args);
		else
			result += write(1, message, 1);
		if (!*message)
			return (result - 1);
		message++;
	}
	va_end(args);
	return (result);
}
