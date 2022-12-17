/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:43:39 by tvo               #+#    #+#             */
/*   Updated: 2022/12/17 15:23:32 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	ft_conversion_nbr(int nb)
{
	int		len;
	char	*str;

	str = ft_itoa(nb);
	len = ft_conversion_str(str);
	free(str);
	return (len);
}
