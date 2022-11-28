/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:41:59 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/28 11:58:04 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_init_img(t_so_long *mygame)
{
	mygame->rel_path_path = "./assets/background_stars.xpm";
	mygame->path = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_path,
			&mygame->i, &mygame->j);
	mygame->rel_path_wall = "./assets/meteor.xpm";
	mygame->wall = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_wall,
			&mygame->i, &mygame->j);
	mygame->rel_path_ply = "./assets/Player1_up.xpm";
	mygame->playerup = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_ply,
			&mygame->i, &mygame->j);
	mygame->rel_path_col = "./assets/Collect.xpm";
	mygame->collect = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_col,
			&mygame->i, &mygame->j);
	mygame->rel_path_exi = "./assets/Exit.xpm";
	mygame->exitus = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_exi,
			&mygame->i, &mygame->j);
	mygame->rel_path_plydown = "./assets/Player1_down.xpm";
	mygame->playerdown = mlx_xpm_file_to_image(mygame->mlx,
			mygame->rel_path_plydown, &mygame->i, &mygame->j);
	mygame->rel_path_plyleft = "./assets/Player1_left.xpm";
	mygame->playerleft = mlx_xpm_file_to_image(mygame->mlx,
			mygame->rel_path_plyleft, &mygame->i, &mygame->j);
	mygame->rel_path_plyright = "./assets/Player1_right.xpm";
	mygame->playerright = mlx_xpm_file_to_image(mygame->mlx,
			mygame->rel_path_plyright, &mygame->i, &mygame->j);
}

void	ft_setplayer(int jwidth, int iheight, t_so_long *mygame)
{
	mygame->myplayer.horizontal = jwidth;
	mygame->myplayer.vertical = iheight;
	ft_paintplayer_down(jwidth, iheight, mygame);
}

void	ft_setcollect(int jwidth, int iheight, t_so_long *mygame)
{
	mygame->colsum++;
	mygame->collectible++;
	ft_paint_collect(jwidth, iheight, mygame);
}
