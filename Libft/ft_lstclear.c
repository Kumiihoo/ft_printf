/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedina <mamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:59:02 by mamedina          #+#    #+#             */
/*   Updated: 2022/11/25 15:08:35 by mamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;
	t_list	*actualnode;

	if (*lst != NULL)
	{
		actualnode = *lst;
		while (actualnode != NULL)
		{
			nextnode = actualnode -> next;
			ft_lstdelone(actualnode, del);
			actualnode = nextnode;
		}
		*lst = NULL;
	}
}
