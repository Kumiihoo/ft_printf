/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:54:00 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/26 10:54:00 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numword(const char *s, char c)
{
	size_t	nwrd;

	nwrd = 0;
	while (*s)
	{
		if (*s != c)
		{
			nwrd++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (nwrd);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	array = malloc(sizeof(char *) * (ft_numword(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			array[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	array[i] = 0;
	return (array);
}
