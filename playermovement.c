/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playermovement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:46:05 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/29 16:23:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

void	ft_currentfield_left(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		ft_paintplayer_left(x_next, y_next, mypath);
		ft_paintpath(x, y, mypath);
		ft_paintexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		ft_paintpath(x, y, mypath);
	}
	else
	{
		ft_paintpath(x, y, mypath);
		ft_paintplayer_left(x_next, y_next, mypath);
	}
}

void	ft_currentfield_right(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		ft_paintplayer_right(x_next, y_next, mypath);
		ft_paintpath(x, y, mypath);
		ft_paintexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		ft_paintpath(x, y, mypath);
	}
	else
	{
		ft_paintpath(x, y, mypath);
		ft_paintplayer_right(x_next, y_next, mypath);
	}
}

void	ft_currentfield_down(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		ft_paintplayer_down(x_next, y_next, mypath);
		ft_paintpath(x, y, mypath);
		ft_paintexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		ft_paintpath(x, y, mypath);
	}
	else
	{
		ft_paintpath(x, y, mypath);
		ft_paintplayer_down(x_next, y_next, mypath);
	}
}
