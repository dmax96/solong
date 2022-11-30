/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:11:15 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:11:17 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	while (index >= 0)
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
