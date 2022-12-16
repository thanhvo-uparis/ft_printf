/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:53:22 by tvo               #+#    #+#             */
/*   Updated: 2022/12/16 19:10:14 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...)
{
	int sum;
	int count;
	va_list args;

	sum = 0;
	count = 0;
	va_start(args, num);
	while (count < num)
	{
		sum += va_arg(args, int);
		count++;
	}
	va_end(args);
	return (sum);
}

void printstr(int num, ...)
{
	int count = 0;
	char *ptr;

	va_list args;
	va_start(args, num);
	while(count < num)
	{
		ptr = va_arg(args, char *);
		printf("%s\n", ptr);
		count++;
	}
	va_end(args);
}
int main()
{
	// int res = sum(4, 12, 3, 5, 8);
	// printf("result is %d", res);
	printstr(3, "black", "hole", "42Paris!");

}
