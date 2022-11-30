/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:09:45 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:09:47 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	sc;
	size_t			index;

	str1 = (unsigned char *)str;
	sc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		str1[index] = sc;
		index++;
	}
	return (str1);
}
