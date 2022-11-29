/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitgame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:58:18 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:30:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exitgame(void)
{
	exit (0);
}

void	check_up(t_so_long *game, int height, int width)
{
	count_collectible(game);
	putpath(width, height - 1, game);
	updatefield(width, height, game);
	game->map.map[height - 1][width] = '0';
}

void	check_down(t_so_long *game, int height, int width)
{
	count_collectible(game);
	putpath(width, height + 1, game);
	updatemap(width, height, game);
	updatefield_down(width, height, game);
	game->map.map[height + 1][width] = '0';
}

void	check_left(t_so_long *game, int height, int width)
{
	count_collectible(game);
	putpath(width - 1, height, game);
	updatemap(width, height, game);
	updatefield_left(width, height, game);
	game->map.map[height][width - 1] = '0';
}

void	check_right(t_so_long *game, int height, int width)
{
	count_collectible(game);
	putpath(width + 1, height, game);
	updatefield_right(width, height, game);
	game->map.map[height][width + 1] = '0';
}
