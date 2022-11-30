/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:07:09 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:07:11 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalpha(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (1);
	else if (argument >= 97 && argument <= 122)
		return (2);
	else
		return (0);
}
