/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:06:51 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/17 21:06:49 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;
	size_t	i;

	i = ft_strlen(s) + 1;
	string = ft_calloc(sizeof(char), i);
	if (!string)
		return (NULL);
	string = ft_memcpy(string, s, i);
	return (string);
}
