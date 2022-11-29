/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:33:26 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:28:01 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	ft_up(t_so_long *mygame)
{
	int		height;
	int		width;

	height = mygame->myplayer.vertical;
	width = mygame->myplayer.horizontal;
	if (height - 1 != 0)
	{
		if (mygame->map.map[height - 1][width] == '0'
			|| mygame->map.map[height - 1][width] == 'C')
		{
			if (mygame->map.map[height - 1][width] == 'C')
			{
				count_collectible(mygame);
				putpath(width, height - 1, mygame);
				update_w(width, height, mygame);
				mygame->map.map[height - 1][width] = '0';
				return ;
			}
			mygame->myplayer.vertical--;
			update_w(width, height, mygame);
			count_steps(mygame);
		}
		else if (mygame->map.map[height - 1][width] == 'E')
			check_collectible(mygame);
	}
}

void	ft_left(t_so_long *mygame)
{
	int	height;
	int	width;

	height = mygame->myplayer.vertical;
	width = mygame->myplayer.horizontal;
	if (width - 1 != 0)
	{
		if (mygame->map.map[height][width - 1] == '0'
			|| mygame->map.map[height][width - 1] == 'C')
		{
			if (mygame->map.map[height][width - 1] == 'C')
			{
				count_collectible(mygame);
				putpath(width - 1, height, mygame);
				update_a(width, height, mygame);
				mygame->map.map[height][width - 1] = '0';
				return ;
			}
			mygame->myplayer.horizontal--;
			update_a(width, height, mygame);
			count_steps(mygame);
		}
		else if (mygame->map.map[height][width - 1] == 'E')
			check_collectible(mygame);
	}
}

void	ft_down(t_so_long *mygame)
{
	int	height;
	int	width;

	height = mygame->myplayer.vertical;
	width = mygame->myplayer.horizontal;
	if (height + 1 != mygame->img_height - 1)
	{
		if (mygame->map.map[height + 1][width] == '0'
			|| mygame->map.map[height + 1][width] == 'C')
		{
			if (mygame->map.map[height + 1][width] == 'C')
			{
				count_collectible(mygame);
				putpath(width, height + 1, mygame);
				update_s(width, height, mygame);
				mygame->map.map[height + 1][width] = '0';
				return ;
			}
			mygame->myplayer.vertical++;
			update_s(width, height, mygame);
			count_steps(mygame);
		}
		else if (mygame->map.map[height + 1][width] == 'E')
			check_collectible(mygame);
	}
}

void	ft_right(t_so_long *mygame)
{
	int	height;
	int	width;

	height = mygame->myplayer.vertical;
	width = mygame->myplayer.horizontal;
	if (width + 1 != mygame->img_width - 1)
	{
		if (mygame->map.map[height][width + 1] == '0'
			|| mygame->map.map[height][width + 1] == 'C')
		{
			if (mygame->map.map[height][width + 1] == 'C')
			{
				count_collectible(mygame);
				putpath(width + 1, height, mygame);
				update_d(width, height, mygame);
				mygame->map.map[height][width + 1] = '0';
				return ;
			}
			mygame->myplayer.horizontal++;
			update_d(width, height, mygame);
			count_steps(mygame);
		}
		else if (mygame->map.map[height][width + 1] == 'E')
			check_collectible(mygame);
	}
}

int	playermove(int keycode, t_so_long *mygame)
{
	if (keycode == 13)
		ft_up(mygame);
	if (keycode == 0)
		ft_left(mygame);
	if (keycode == 1)
		ft_down(mygame);
	if (keycode == 2)
		ft_right(mygame);
	if (keycode == 53)
		exitgame();
	return (0);
}
