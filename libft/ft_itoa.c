/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:07:33 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:07:35 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(int n)
{
	int	index;

	index = 0;
	if (n == 0)
		index = 1;
	else if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			index ++;
		}
	}
	else
	{
		while (n < 0)
		{
			n = n / 10;
			index ++;
		}
		index++;
	}
	return (index);
}

static char	*the_minimum(char *result)
{
	if (result == 0)
		return (0);
	result = ft_memcpy(result, "-2147483648", 11);
	result[11] = '\0';
	return (result);
}

static char	*compare(int n, char *result)
{
	int		len;

	len = calc(n);
	if (result == 0)
		return (0);
	if (n < 0)
	{
		result[0] = '-';
		n = n * (-1);
	}
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = ((n % 10) + '0');
		n = n / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = calc(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	if (n == -2147483648)
		return (the_minimum(result));
	result = compare(n, result);
	result[len] = '\0';
	return (result);
}
