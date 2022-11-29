/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:50:45 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:28:01 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checkwall(t_so_long *mygame)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < mygame->img_height)
	{
		if (mygame->map.map[height][width] != '1')
			return (-1);
		height++;
	}
	height = 0;
	width = 0;
	while (width < mygame->img_width)
	{
		if (mygame->map.map[height][width] != '1')
			return (-1);
		width++;
	}
	return (0);
}

int	checkwall2(t_so_long *mygame)
{
	int	height;
	int	width;

	height = 0;
	width = mygame->img_width - 1;
	while (height < mygame->img_height)
	{
		if (mygame->map.map[height][width] != '1')
			return (-1);
		height++;
	}
	height = mygame->img_height - 1;
	width = 0;
	while (width < mygame->img_width)
	{
		if (mygame->map.map[height][width] != '1')
			return (-1);
		width++;
	}
	return (0);
}

int	checkletters(t_so_long *mygame)
{
	int		height;
	int		width;
	char	c;

	height = 0;
	width = 0;
	while (height < mygame->img_height)
	{
		while (width < mygame->img_width)
		{
			c = mygame->map.map[height][width];
			if (c != '0' && c != '1' && c != 'P' && c != 'C' && c != 'E')
				return (-1);
			width++;
		}
		height++;
		width = 0;
	}
	return (0);
}

int	checkmaparameters(t_so_long *mygame)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < mygame->img_height)
	{
		while (width < mygame->img_width)
		{
			if (mygame->map.map[height][width] == 'P')
				mygame->maperrors.plycount++;
			else if (mygame->map.map[height][width] == 'C')
				mygame->maperrors.colcount++;
			else if (mygame->map.map[height][width] == 'E')
				mygame->maperrors.extcount++;
			width++;
		}
		height++;
		width = 0;
	}
	if (mygame->maperrors.plycount != 1 || mygame->maperrors.colcount < 1
		|| mygame->maperrors.extcount < 1)
		return (-1);
	else
		return (0);
}

void	errors(t_so_long *mygame)
{
	if (checkwall(mygame) == -1 || checkwall2(mygame) == -1
		|| checkletters(mygame) == -1 || checkmaparameters(mygame) == -1
		|| checksquare(mygame) == -1)
	{
		printf("Error\n");
		printf("Your map is wrong! (scemo)");
		exit (0);
	}
}
