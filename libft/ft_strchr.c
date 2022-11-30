/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:10:25 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:10:27 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*s1;

	index = 0;
	s1 = (char *)str;
	while (s1[index] != c && s1[index] != '\0')
	{
		index++;
	}
	if (s1[index] == c)
		return (&s1[index]);
	else
		return (0);
}
