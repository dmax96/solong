/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:50:45 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:09:12 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	checkwall(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		iheight++;
	}
	iheight = 0;
	jwidth = 0;
	while (jwidth < mygame->img_width)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		jwidth++;
	}
	return (0);
}

int	checkwall2(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = mygame->img_width - 1;
	while (iheight < mygame->img_height)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		iheight++;
	}
	iheight = mygame->img_height - 1;
	jwidth = 0;
	while (jwidth < mygame->img_width)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		jwidth++;
	}
	return (0);
}

int	checkletters(t_so_long *mygame)
{
	int		iheight;
	int		jwidth;
	char	c;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			c = mygame->map.map[iheight][jwidth];
			if (c != '0' && c != '1' && c != 'P' && c != 'C' && c != 'E')
				return (-1);
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
	return (0);
}

int	checkmaparameters(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			if (mygame->map.map[iheight][jwidth] == 'P')
				mygame->maperrors.plycount++;
			else if (mygame->map.map[iheight][jwidth] == 'C')
				mygame->maperrors.colcount++;
			else if (mygame->map.map[iheight][jwidth] == 'E')
				mygame->maperrors.extcount++;
			jwidth++;
		}
		iheight++;
		jwidth = 0;
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
