/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 01:13:33 by yait-nas          #+#    #+#             */
/*   Updated: 2023/12/25 16:20:06 by yait-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(const char *message, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_put_unsigned(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_putnbr_hex(unsigned int n, char specifier);
int	ft_put_adress(void *ptr);

#endif
