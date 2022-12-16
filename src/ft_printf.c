/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:52:10 by tvo               #+#    #+#             */
/*   Updated: 2022/12/16 19:57:00 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

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
			print_length = ft_format(va_arg(args, int));

		}
	}
	va_end(args);
	return (print_length);
}

int	main()
{
	char i = 'c';
	int j = 57;
	char x[] = "hello!";

	int res = ft_printf("Coucou %c %d %s \n", i, j, x);
	int res = printf("Coucou %c %d %s \n", i, j, x);
}
