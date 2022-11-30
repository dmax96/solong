/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:06 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:08:08 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *lst;
	if (*lst == 0 || del == 0)
		return ;
	while (temp1->next != 0)
	{
		temp2 = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = temp2;
	}
	ft_lstdelone(temp1, del);
	*lst = 0;
	return ;
}
