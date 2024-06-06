/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <yait-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:05:16 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:18:18 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_recursion(unsigned long long n)
{
	char	*base;
	int		result;

	result = 0;
	base = "0123456789abcdef";
	if (n < 16)
		result += ft_putchar(base[n]);
	else
	{
		result += ft_recursion(n / 16);
		result += ft_recursion(n % 16);
	}
	return (result);
}

int	ft_put_adress(void *ptr)
{
	unsigned long long	hold_adress;
	int					result;

	result = 0;
	hold_adress = (unsigned long long )ptr;
	result += write(1, "0x", 2);
	result += ft_recursion(hold_adress);
	return (result);
}
