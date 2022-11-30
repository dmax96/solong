/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:59 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:09:01 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((cdest == 0) && (csrc == 0))
		return (0);
	if (csrc < cdest)
	{
		while (len > 0)
		{
			cdest[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(cdest, csrc, len);
	return (dst);
}
