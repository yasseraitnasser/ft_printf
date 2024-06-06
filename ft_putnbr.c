/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:59:32 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:19:15 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_putnbr(int nb)
{
	int	result;

	result = 0;
	if (nb == (-2147483648))
		result += write(1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
	{
		result += ft_putchar(nb + '0');
	}
	else if (nb > 9)
	{
		result += ft_putnbr(nb / 10);
		result += ft_putnbr(nb % 10);
	}
	else
	{
		result += write(1, "-", 1);
		nb = nb * -1;
		result += ft_putnbr(nb);
	}
	return (result);
}
