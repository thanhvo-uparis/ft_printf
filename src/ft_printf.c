/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:52:10 by tvo               #+#    #+#             */
/*   Updated: 2022/12/16 23:53:51 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

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
	// int j = 57;
	// char x[] = "hello!";

	int res = ft_printf("Coucou %c\n", i);
	int res2 = printf("Coucou %c\n", i);
}
