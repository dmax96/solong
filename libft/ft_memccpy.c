/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:35 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:08:37 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	index = 0;
	while (n)
	{
		cdest[index] = csrc[index];
		if (csrc[index] == (unsigned char)c)
			break ;
		index++;
		n--;
	}
	if (n)
		return (&cdest[index + 1]);
	return (0);
}
