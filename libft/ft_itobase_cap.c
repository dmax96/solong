/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase_cap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:07:42 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:07:42 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(unsigned long n, int base)
{
	int	index;

	index = 0;
	if (n == 0)
		index = 1;
	while (n > 0)
	{
		n = n / base;
		index ++;
	}
	return (index);
}

static char	*compare(unsigned long n, char *result, int base)
{
	int		len;

	len = calc(n, base);
	if (result == 0)
		return (0);
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		if (n % base > 9)
			result[--len] = (n % base) - 10 + 'A';
		else
			result[--len] = ((n % base) + '0');
		n = n / base;
	}
	return (result);
}

char	*ft_itobase_cap(unsigned long n, int base)
{
	int		len;
	char	*result;

	len = calc(n, base);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result = compare(n, result, base);
	result[len] = '\0';
	return (result);
}
