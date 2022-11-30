/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:12:45 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:12:47 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_load_img(t_so_long *game)
{
	game->rel_path_path = "./assets/background_stars.xpm";
	game->path = mlx_xpm_file_to_image(game->mlx, game->rel_path_path,
			&game->i, &game->j);
	game->rel_path_wall = "./assets/meteor.xpm";
	game->wall = mlx_xpm_file_to_image(game->mlx, game->rel_path_wall,
			&game->i, &game->j);
	game->rel_path_ply = "./assets/Player1_up.xpm";
	game->playerup = mlx_xpm_file_to_image(game->mlx, game->rel_path_ply,
			&game->i, &game->j);
	game->rel_path_col = "./assets/Collect.xpm";
	game->collect = mlx_xpm_file_to_image(game->mlx, game->rel_path_col,
			&game->i, &game->j);
	game->rel_path_exi = "./assets/Exit.xpm";
	game->exitus = mlx_xpm_file_to_image(game->mlx, game->rel_path_exi,
			&game->i, &game->j);
	game->rel_path_plydown = "./assets/Player1_down.xpm";
	game->playerdown = mlx_xpm_file_to_image(game->mlx,
			game->rel_path_plydown, &game->i, &game->j);
	game->rel_path_plyleft = "./assets/Player1_left.xpm";
	game->playerleft = mlx_xpm_file_to_image(game->mlx,
			game->rel_path_plyleft, &game->i, &game->j);
	game->rel_path_plyright = "./assets/Player1_right.xpm";
	game->playerright = mlx_xpm_file_to_image(game->mlx,
			game->rel_path_plyright, &game->i, &game->j);
}

void	putplayer(int width, int height, t_so_long *game)
{
	game->myplayer.horizontal = width;
	game->myplayer.vertical = height;
	putplayer_down(width, height, game);
}

void	putcollect(int width, int height, t_so_long *game)
{
	game->colsum++;
	game->collectible++;
	put_collect(width, height, game);
}
