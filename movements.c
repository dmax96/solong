/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:12:54 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:12:56 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	ft_up(t_so_long *game)
{
	int		height;
	int		width;

	height = game->myplayer.vertical;
	width = game->myplayer.horizontal;
	if (height - 1 != 0)
	{
		if (game->map.map[height - 1][width] == '0'
			|| game->map.map[height - 1][width] == 'C')
		{
			if (game->map.map[height - 1][width] == 'C')
			{
				count_collectible(game);
				putpath(width, height - 1, game);
				update_w(width, height, game);
				game->map.map[height - 1][width] = '0';
				return ;
			}
			game->myplayer.vertical--;
			update_w(width, height, game);
			count_steps(game);
		}
		else if (game->map.map[height - 1][width] == 'E')
			check_collectible(game);
	}
}

void	ft_left(t_so_long *game)
{
	int	height;
	int	width;

	height = game->myplayer.vertical;
	width = game->myplayer.horizontal;
	if (width - 1 != 0)
	{
		if (game->map.map[height][width - 1] == '0'
			|| game->map.map[height][width - 1] == 'C')
		{
			if (game->map.map[height][width - 1] == 'C')
			{
				count_collectible(game);
				putpath(width - 1, height, game);
				update_a(width, height, game);
				game->map.map[height][width - 1] = '0';
				return ;
			}
			game->myplayer.horizontal--;
			update_a(width, height, game);
			count_steps(game);
		}
		else if (game->map.map[height][width - 1] == 'E')
			check_collectible(game);
	}
}

void	ft_down(t_so_long *game)
{
	int	height;
	int	width;

	height = game->myplayer.vertical;
	width = game->myplayer.horizontal;
	if (height + 1 != game->img_height - 1)
	{
		if (game->map.map[height + 1][width] == '0'
			|| game->map.map[height + 1][width] == 'C')
		{
			if (game->map.map[height + 1][width] == 'C')
			{
				count_collectible(game);
				putpath(width, height + 1, game);
				update_s(width, height, game);
				game->map.map[height + 1][width] = '0';
				return ;
			}
			game->myplayer.vertical++;
			update_s(width, height, game);
			count_steps(game);
		}
		else if (game->map.map[height + 1][width] == 'E')
			check_collectible(game);
	}
}

void	ft_right(t_so_long *game)
{
	int	height;
	int	width;

	height = game->myplayer.vertical;
	width = game->myplayer.horizontal;
	if (width + 1 != game->img_width - 1)
	{
		if (game->map.map[height][width + 1] == '0'
			|| game->map.map[height][width + 1] == 'C')
		{
			if (game->map.map[height][width + 1] == 'C')
			{
				count_collectible(game);
				putpath(width + 1, height, game);
				update_d(width, height, game);
				game->map.map[height][width + 1] = '0';
				return ;
			}
			game->myplayer.horizontal++;
			update_d(width, height, game);
			count_steps(game);
		}
		else if (game->map.map[height][width + 1] == 'E')
			check_collectible(game);
	}
}

int	playermove(int keycode, t_so_long *game)
{
	if (keycode == 13)
		ft_up(game);
	if (keycode == 0)
		ft_left(game);
	if (keycode == 1)
		ft_down(game);
	if (keycode == 2)
		ft_right(game);
	if (keycode == 53)
		exitgame();
	return (0);
}
