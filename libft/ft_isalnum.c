/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:07:01 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:07:03 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalnum(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (1);
	else if (argument >= 97 && argument <= 122)
		return (1);
	else if (argument >= 48 && argument <= 57)
		return (1);
	else
		return (0);
}
