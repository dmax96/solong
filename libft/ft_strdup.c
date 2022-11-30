/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:10:31 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:10:34 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	int		length;
	char	*target;

	index = 0;
	length = ft_strlen(s);
	target = (char *)malloc((length + 1) * sizeof(char));
	if (target == 0)
		return (0);
	while (index < length)
	{
		target[index] = s[index];
		index++;
	}
	target[index] = '\0';
	return (target);
}
