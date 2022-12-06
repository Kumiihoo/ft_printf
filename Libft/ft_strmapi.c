/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:06:27 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/22 19:20:02 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!s || !str)
		return (NULL);
	while (i < ft_strlen(s))
	{
			str[i] = f(i, s[i]);
			i++;
	}
	str[i] = '\0';
	return (str);
}
