/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:09:23 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/14 17:11:57 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		cc;

	cc = (char )c;
	i = 0;
	i = ft_strlen(s);
	if (cc == '\0')
		return (((char *)s) + i);
	i--;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
