/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 04:57:09 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/10 04:57:14 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)c == *s)
			return ((char *)s);
		s++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)s);
	return (0);
}
