/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:06:17 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/15 22:08:39 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int				res;
	unsigned char	flag;

	flag = 1;
	res = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+')
			nptr++;
	else if (*nptr == '-')
	{
			flag = 0;
			nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		res = ((*nptr - '0') + res * 10);
		nptr++;
	}
	if (!flag)
		res *= -1;
	return (res);
}
