/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:11:42 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/18 10:42:31 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *) haystack);
	while (*haystack && len-- >= ft_strlen(needle))
	{
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
