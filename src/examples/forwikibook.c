/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forwikibook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:52:18 by tvo               #+#    #+#             */
/*   Updated: 2022/12/16 23:27:12 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	printargs(int num, ...)
{
	int count;

	count = 0;
	va_list args;
	va_start(args, num);
	for (int i = num; i >= 0; i = va_arg(args, int))
	{
		printf("%d  ", i);
		count++;
	}
	printf("\nNbr de element is %d", count);
	va_end(args);
	return (count);
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, 24, 48, -1);
//    printargs(84, 51, -1);
//    printargs(-1);
//    printargs(1, -1);
   return 0;
}
