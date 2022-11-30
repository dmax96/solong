/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:06:37 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:06:40 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r')
		return (1);
	else if (c == '\f' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	long	sign;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + ((int)*str - '0');
		if (result > 2147483647 && sign == 1)
			return (-1);
		if (result > 2147483648 && sign == -1)
			return (0);
		str++;
	}
	return (sign * result);
}
