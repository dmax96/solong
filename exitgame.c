/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitgame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:12:40 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:12:42 by ldi-masc         ###   ########.fr       */
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
