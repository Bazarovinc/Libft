/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:56:58 by ctelma            #+#    #+#             */
/*   Updated: 2019/09/09 17:43:43 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (*alst && del)
	{
		list = *alst;
		while (*alst)
		{
			list = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = list;
		}
	}
}
