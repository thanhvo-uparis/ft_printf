/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:54:47 by tvo               #+#    #+#             */
/*   Updated: 2022/12/17 19:48:40 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_format(va_list argptr, const char format);
int	ft_printf(const char *str, ...);
int	ft_conversion_char(int c);
// conversion string
void	ft_putstr(char *str);
int	ft_conversion_str(char *str);
// conversion number
int	ft_conversion_nbr(int nb);

// conversion unsigned
int	ft_conversion_unsigned(unsigned int n);

// conversion hexadecimal

// conversion percent

// conversion ptr

#endif
