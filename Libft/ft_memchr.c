/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:53:26 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/26 23:40:04 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	char		*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	while (n > i)
	{
		if (str[i] == (char )c)
			return (&str[i]);
		i++;
	}
	if (!s)
		return (&str[i]);
	return (NULL);
}
