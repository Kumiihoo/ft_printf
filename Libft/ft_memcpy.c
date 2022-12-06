/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:16:45 by mamedina          #+#    #+#             */
/*   Updated: 2022/10/06 13:00:38 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)src;
	s2 = (char *)dst;
	if ((!s1 && !s2) || !n)
		return (dst);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}
