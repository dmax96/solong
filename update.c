/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:57:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/29 17:30:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	update_w(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield(width, height, game);
}

void	update_a(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_left(width, height, game);
}

void	update_s(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_down(width, height, game);
}

void	update_d(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_right(width, height, game);
}
