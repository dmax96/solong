/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:27 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:08:30 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*temp;

	index = 1;
	temp = lst;
	if (lst == 0)
		return (0);
	while (temp->next != 0)
	{
		temp = temp->next;
		index++;
	}
	return (index);
}
