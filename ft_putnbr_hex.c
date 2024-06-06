/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:01:14 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:17:36 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_putnbr_hex(unsigned int n, char specifier)
{
	char	*base;
	int		result;

	result = 0;
	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 16)
		result += ft_putchar(base[n]);
	else if (n == 16)
		result += ft_putnbr(10);
	else
	{
		result += ft_putnbr_hex(n / 16, specifier);
		result += ft_putnbr_hex(n % 16, specifier);
	}
	return (result);
}
