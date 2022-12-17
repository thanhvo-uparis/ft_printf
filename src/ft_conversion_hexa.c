/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:53:11 by tvo               #+#    #+#             */
/*   Updated: 2022/12/18 00:16:24 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../include/ft_printf.h"
#include <stdio.h>

static int	ft_len_hex(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int main()
{
	printf("%d", ft_len_hex(15));
}
