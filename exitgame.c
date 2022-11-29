/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitgame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:58:18 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:28:01 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exitgame(void)
{
	exit (0);
}

void	check_up(t_so_long *mygame, int height, int width)
{
	count_collectible(mygame);
	putpath(width, height - 1, mygame);
	updatefield(width, height, mygame);
	mygame->map.map[height - 1][width] = '0';
}

void	check_down(t_so_long *mygame, int height, int width)
{
	count_collectible(mygame);
	putpath(width, height + 1, mygame);
	updatemap(width, height, mygame);
	updatefield_down(width, height, mygame);
	mygame->map.map[height + 1][width] = '0';
}

void	check_left(t_so_long *mygame, int height, int width)
{
	count_collectible(mygame);
	putpath(width - 1, height, mygame);
	updatemap(width, height, mygame);
	updatefield_left(width, height, mygame);
	mygame->map.map[height][width - 1] = '0';
}

void	check_right(t_so_long *mygame, int height, int width)
{
	count_collectible(mygame);
	putpath(width + 1, height, mygame);
	updatefield_right(width, height, mygame);
	mygame->map.map[height][width + 1] = '0';
}
