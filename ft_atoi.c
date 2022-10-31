/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:00:21 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/27 09:28:35 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	number;
	int					signe;

	i = 0;
	signe = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (number >= LLONG_MAX && signe == 1)
			return (-1);
		if (number >= LLONG_MAX && signe == -1)
			return (0);
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * signe);
}
