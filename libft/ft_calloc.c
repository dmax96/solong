/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:06:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:06:51 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*result;
	size_t	index;

	result = malloc(nitems * size);
	if (result == 0)
		return (0);
	index = 0;
	while (index < (nitems * size))
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}
