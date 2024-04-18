/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:55:11 by lmedrano          #+#    #+#             */
/*   Updated: 2023/11/01 14:29:48 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *lst_new)
{
	t_list	*list;

	list = *lst;
	if (*lst && lst_new)
	{
		while (list->next)
				list = list->next;
		list->next = lst_new;
	}
	else
	{
		*lst = lst_new;
	}
}
