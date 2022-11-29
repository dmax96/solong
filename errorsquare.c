/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorsquare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:15:47 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:30:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checksquare(t_so_long *game)
{
	int	index;
	int	first_lwidth;

	first_lwidth = ft_strlen(game->map.map[0]);
	index = 1;
	while (index < game->img_height)
	{
		if ((int)ft_strlen(game->map.map[index]) != first_lwidth)
			return (-1);
		index++;
	}
	return (0);
}
