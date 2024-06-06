/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 01:14:51 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:18:44 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_put_unsigned(unsigned int nb)
{
	unsigned int	result;

	result = 0;
	if (nb >= 0 && nb <= 9)
		result += ft_putchar(nb + '0');
	else
	{
		result += ft_put_unsigned(nb / 10);
		result += ft_put_unsigned(nb % 10);
	}
	return (result);
}
