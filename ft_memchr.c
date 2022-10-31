/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:42:35 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/26 23:20:27 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	cc;

	cc = c;
	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == cc)
			return (&d[i]);
		i++;
	}
	return (NULL);
}
