/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:33:26 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/25 14:47:58 by ldi-masc         ###   ########.fr       */
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
			|| mygame->map.map[iheight - 1][jwidth] == 'C')
		{
			if (mygame->map.map[iheight - 1][jwidth] == 'C')
			{
				ft_countcol(mygame);
				ft_paintpath(jwidth, iheight - 1, mygame);
				ft_updatemap(jwidth, iheight, mygame);
				ft_currentfield(jwidth, iheight, mygame);
				mygame->map.map[iheight - 1][jwidth] = '0';
				return ;
			}
			mygame->myplayer.vertical--;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight - 1][jwidth] == 'E')
		{
			ft_checkcol(mygame);
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
			|| mygame->map.map[iheight][jwidth - 1] == 'C')
		{
			if (mygame->map.map[iheight][jwidth - 1] == 'C')
			{
				ft_countcol(mygame);
				ft_paintpath(jwidth - 1, iheight, mygame);
				ft_updatemap(jwidth, iheight, mygame);
				ft_currentfield_left(jwidth, iheight, mygame);
				mygame->map.map[iheight][jwidth - 1] = '0';
				return ;
			}
			mygame->myplayer.horizontal--;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield_left(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight][jwidth - 1] == 'E')
			ft_checkcol(mygame);
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
			|| mygame->map.map[iheight + 1][jwidth] == 'C')
		{
			if (mygame->map.map[iheight + 1][jwidth] == 'C')
			{
				ft_countcol(mygame);
				ft_paintpath(jwidth, iheight + 1, mygame);
				ft_updatemap(jwidth, iheight, mygame);
				ft_currentfield_down(jwidth, iheight, mygame);
				mygame->map.map[iheight + 1][jwidth] = '0';
				return ;
			}
			mygame->myplayer.vertical++;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield_down(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight + 1][jwidth] == 'E')
			ft_checkcol(mygame);
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
			|| mygame->map.map[iheight][jwidth + 1] == 'C')
		{
			if (mygame->map.map[iheight][jwidth + 1] == 'C')
			{
				ft_countcol(mygame);
				ft_paintpath(jwidth + 1, iheight, mygame);
				ft_currentfield_right(jwidth, iheight, mygame);
				mygame->map.map[iheight][jwidth + 1] = '0';
				return ;
			}
			mygame->myplayer.horizontal++;
			ft_updatemap(jwidth, iheight, mygame);
			ft_currentfield_right(jwidth, iheight, mygame);
			ft_count_step(mygame);
		}
		else if (mygame->map.map[iheight][jwidth + 1] == 'E')
			ft_checkcol(mygame);
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
