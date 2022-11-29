/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updatemap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:21 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 16:31:29 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

void	ft_updatemap(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		mypath->map.map[y][x] = 'E';
		mypath->map.map[y_next][x_next] = 'P';
	}
	else
	{
		mypath->map.map[y][x] = '0';
		if (mypath->map.map[y_next][x_next] == 'E')
			mypath->map.map[y_next][x_next] = 'G';
		else
			mypath->map.map[y_next][x_next] = 'P';
	}
}

void	ft_currentfield(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		putplayer_up(x_next, y_next, mypath);
		putpath(x, y, mypath);
		putexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		putpath(x, y, mypath);
	}
	else
	{
		putpath(x, y, mypath);
		putplayer_up(x_next, y_next, mypath);
	}
}
