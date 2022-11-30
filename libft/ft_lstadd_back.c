/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:07:55 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:07:57 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (new == 0)
		return ;
	if (temp == 0)
	{
		*lst = new;
		return ;
	}
	while ((*temp).next != 0)
		temp = (*temp).next;
	(*temp).next = new;
}
