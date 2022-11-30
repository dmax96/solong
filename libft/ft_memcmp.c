/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:48 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:08:50 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			index;

	index = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (index < n)
	{
		if (cs1[index] != cs2[index])
			return (cs1[index] - cs2[index]);
		index++;
	}
	return (0);
}
