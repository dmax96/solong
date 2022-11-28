/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collectexit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:50:07 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/28 11:46:26 by vbellucc         ###   ########.fr       */
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
	char	*putsteps;
	int		steps_width;
	int		steps_height;

	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
	steps_width = 50;
	steps_height = 50;
	putsteps = ft_itoa(mygame->steps);
	mlx_string_put(mygame->mlx, mygame->window, steps_width, steps_height, 24573, putsteps);
}

void	ft_show_step(t_so_long *mygame)
{
	char	*putsteps;
	int		steps_width;
	int		steps_height;

	steps_width = 50;
	steps_height = 50;
	putsteps = ft_itoa(mygame->steps);
	mlx_string_put(mygame->mlx, mygame->window, steps_width, steps_height, 24573, putsteps);
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
