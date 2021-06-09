/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:54:58 by minsunki          #+#    #+#             */
/*   Updated: 2021/06/09 23:17:25 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*llist;

	if (!new)
		return ;
	if (*lst)
	{
		llist = ft_dlstlast(*lst);
		llist->next = new;
		new->prev = llist;
	}
	else
		*lst = new;
}
