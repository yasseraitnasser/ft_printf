/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:58:55 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:19:41 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	result;

	result = 0;
	if (str == NULL)
	{
		result += write(1, "(null)", 6);
		return (result);
	}
	i = 0;
	while (str[i] != '\0')
	{
		result += write(1, &str[i], 1);
		i++;
	}
	return (result);
}
