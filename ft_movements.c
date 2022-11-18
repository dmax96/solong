/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:33:26 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/18 11:43:32 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <stdio.h>

void	ft_w(t_so_long *mygame)
{
	int		iheight;
	int		jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;
	if (iheight - 1 != 0)
	{
		if (mygame->map.map[iheight - 1][jwidth] == '0'
			|| mygame->map.map[iheight - 1][jwidth] == 'C'
			|| mygame->map.map[iheight - 1][jwidth] == '1')
		{
			if (mygame->map.map[iheight - 1][jwidth] == 'C')
				ft_countcol(mygame);
			else if (mygame->map.map[iheight - 1][jwidth] == '1')
				ft_paintpath(jwidth, iheight, mygame);
			mygame->myplayer.vertical--;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight - 1][jwidth] == 'E')
		{
			ft_check_w(mygame, iheight, jwidth);
		}
	}
}

void	ft_a(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;
	if (jwidth - 1 != 0)
	{
		if (mygame->map.map[iheight][jwidth - 1] == '0'
			|| mygame->map.map[iheight][jwidth - 1] == 'C'
			|| mygame->map.map[iheight][jwidth - 1] == '1')
		{
			if (mygame->map.map[iheight][jwidth - 1] == 'C')
				ft_countcol(mygame);
			else if (mygame->map.map[iheight][jwidth - 1] == '1')
				ft_paintpath(jwidth, iheight, mygame);
			mygame->myplayer.horizontal--;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight][jwidth - 1] == 'E')
			ft_check_a(mygame, iheight, jwidth);
	}
}

void	ft_s(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;
	if (iheight + 1 != mygame->img_height - 1)
	{
		if (mygame->map.map[iheight + 1][jwidth] == '0'
			|| mygame->map.map[iheight + 1][jwidth] == 'C'
			|| mygame->map.map[iheight + 1][jwidth] == '1')
		{
			if (mygame->map.map[iheight + 1][jwidth] == 'C')
				ft_countcol(mygame);
			else if (mygame->map.map[iheight + 1][jwidth] == '1')
				ft_paintpath(jwidth, iheight, mygame);
			mygame->myplayer.vertical++;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight + 1][jwidth] == 'E')
			ft_check_s(mygame, iheight, jwidth);
	}
}

void	ft_d(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;
	if (jwidth + 1 != mygame->img_width - 1)
	{
		if (mygame->map.map[iheight][jwidth + 1] == '0'
			|| mygame->map.map[iheight][jwidth + 1] == 'C'
			|| mygame->map.map[iheight][jwidth + 1] == '1')
		{
			if (mygame->map.map[iheight][jwidth + 1] == 'C')
				ft_countcol(mygame);
			else if (mygame->map.map[iheight][jwidth + 1] == '1')
				ft_paintpath(jwidth, iheight, mygame);
			mygame->myplayer.horizontal++;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight][jwidth + 1] == 'E')
			ft_check_d(mygame, iheight, jwidth);
	}
}

int	ft_playermove(int keycode, t_so_long *mygame)
{
	if (keycode == 13)
		ft_w(mygame);
	if (keycode == 0)
		ft_a(mygame);
	if (keycode == 1)
		ft_s(mygame);
	if (keycode == 2)
		ft_d(mygame);
	if (keycode == 53)
		ft_exitgame();
	return (0);
}
