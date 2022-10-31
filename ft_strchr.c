/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:52:23 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/26 23:20:31 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char )c;
	i = 0;
	if (cc == '\0')
	{
		i = ft_strlen(s);
		return (((char *)s) + i);
	}
	while (s[i])
	{
		if (s[i] == cc)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
