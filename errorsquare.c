/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorsquare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:15:47 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 16:23:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	ft_checksquare(t_so_long *mygame)
{
	int	index;
	int	first_lwidth;

	first_lwidth = ft_strlen(mygame->map.map[0]);
	index = 1;
	while (index < mygame->img_height)
	{
		if ((int)ft_strlen(mygame->map.map[index]) != first_lwidth)
			return (-1);
		index++;
	}
	return (0);
}
