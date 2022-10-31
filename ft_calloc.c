/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:31 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/27 15:22:21 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size * count);
	return (ptr);
}
