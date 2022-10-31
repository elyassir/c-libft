/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:59:20 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/27 09:25:22 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	create_char(char *ch, unsigned int n, int size)
{
	if (n == 0)
		ch[size] = '0';
	while (n > 0)
	{
		ch[size--] = n % 10 + 48;
		n = n / 10;
	}
}

static int	count_num(unsigned int nbr)
{
	int	count;

	count = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*ch;

	count = count_num(ft_abs(n));
	if (n < 0)
		count++;
	ch = malloc(count * sizeof(char ) + 1);
	if (!ch)
		return (NULL);
	ch[count--] = '\0';
	if (n < 0)
		ch[0] = '-';
	create_char((ch), ft_abs(n), count);
	return (ch);
}
