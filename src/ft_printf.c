/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:52:10 by tvo               #+#    #+#             */
/*   Updated: 2022/12/17 00:17:48 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list argptr, const char format)
{
	int print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(argptr, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(argptr, char *));
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int i;
	int print_length;
	va_list	args;
	va_start(args, str);

	i = 0;
	print_length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length = ft_format(args, str[++i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (print_length);
}

int	main()
{
	char i = 'h';
	char x[] = "back hole :))";
	// int j = 57;

	int res = ft_printf("Coucou %c %s\n", i, x);
	int res2 = printf("Coucou %c\n", i);
}
