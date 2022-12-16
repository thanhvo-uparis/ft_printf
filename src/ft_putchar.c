/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:44:50 by tvo               #+#    #+#             */
/*   Updated: 2022/12/16 16:59:07 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
}

void	ft_put_ptr()

// int	ft_printnbr(int nb)
// {

// }

// int	ft_printpercent(void)
// {

// }

int main()
{

	int ch;

	// for( ch = 75 ; ch <= 100; ch++ )
	// {
	// printf("Gia tri ASCII = %d, Ky tu = %c\n", ch , ch );
	// }
	// int res = ft_printf("Coucou \n");
	int res2 = printf("Coucou \n");

	printf("res2: %d", res2);
	return(0);
}
