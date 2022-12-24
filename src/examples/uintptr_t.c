/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdint_h.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 09:13:22 by tvo               #+#    #+#             */
/*   Updated: 2022/12/24 10:59:19 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

int main()
{
	void *ptr;
	int a;
	uintptr_t ptr_val;

	a = 42;
	ptr = &a;
	ptr_val = (uintptr_t)ptr;
	printf("La valeur du pointeur est: %" PRIuPTR "\n", ptr_val);

}
		