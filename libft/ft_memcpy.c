/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:53 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:08:55 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	index = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((dst == 0) && (src == 0))
		return (0);
	while (index < n)
	{
		cdest[index] = csrc[index];
		index++;
	}
	return (cdest);
}
