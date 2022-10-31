/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:55:58 by yel-mass          #+#    #+#             */
/*   Updated: 2022/10/15 10:11:38 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_search(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_search(s1[i], set) == 1)
		i++;
	while (j > 0 && ft_search(s1[j], set) == 1)
		j--;
	if (j < i)
		return (ft_strdup(""));
	trim = ft_substr(s1, i, (j - i + 1));
	return (trim);
}
