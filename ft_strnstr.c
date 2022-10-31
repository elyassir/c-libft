/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:31:32 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/18 14:42:09 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		n;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		n = 0;
		while (haystack[i + n] == needle[n] && i + n < len && needle[n])
			n++;
		if (needle[n] == '\0')
			return (((char *)haystack) + i);
		n = 0;
		i++;
		while (haystack[i] != needle[n] && haystack[i])
			i++;
	}
	return (NULL);
}
