/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_updatemap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:21 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/25 11:38:34 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <stdio.h>

void	ft_updatemap(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G' || mypath->map.map[y_next][x_next] == 'C')
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
		ft_paintplayer_up(x_next, y_next, mypath);
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
		ft_paintplayer_up(x_next, y_next, mypath);
	}
}
