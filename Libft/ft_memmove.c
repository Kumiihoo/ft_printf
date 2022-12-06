/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:07:16 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/14 14:40:54 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dest;
	count = 0;
	if ((!s1 && !s2) || !n)
		return (dest);
	if (s1 < s2)
	{
		while (n--)
			s2[n] = s1[n];
	}
	else
	{
		while (count < n)
		{
			s2[count] = s1[count];
			count++;
		}	
	}
	return (dest);
}
