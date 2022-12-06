/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:58:44 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/26 14:55:04 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n && ++i)
		n /= base;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*array;
	const char	*num = "0123456789";
	int			figures;

	figures = ft_numlen(n, 10);
	array = malloc(sizeof(char) * (figures + 1));
	if (!array)
		return (NULL);
	array[figures] = 0;
	if (n < 0)
		array[0] = '-';
	if (n == 0)
		array[0] = '0';
	while (n)
	{
		if (n > 0)
			array[--figures] = num[n % 10];
		else
			array[--figures] = num[n % 10 * -1];
		n /= 10;
	}
	return (array);
}
