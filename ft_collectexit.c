/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collectexit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:50:07 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/18 11:26:12 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_countcol(t_so_long *mygame)
{
	int	screencol;

	mygame->collectible--;
	screencol = mygame->colsum - mygame->collectible;
}

void	ft_checkcol(t_so_long *mygame)
{
	if (mygame->collectible == 0)
	{
		exit (0);
	}
}

void	ft_count_step(t_so_long *mygame)
{
	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
}

int	ft_checkmap_p(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;
	int	count;

	count = 0;
	iheight = 0;
	while (iheight < mygame->img_height)
	{
		jwidth = 0;
		while (jwidth < mygame->img_width)
		{
			if (mygame->map.map[iheight][jwidth] == 'P')
				count++;
			jwidth++;
		}
		iheight++;
	}
	if (count > 1)
	{
		return (-1);
	}
	return (0);
}
