/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 04:57:25 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/10 04:57:32 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*target;

	target = 0;
	while (*s)
	{
		if (*s == (unsigned char) c)
			target = (char *)s;
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return ((char *)target);
}
