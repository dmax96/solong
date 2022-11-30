/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:12:30 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:44:51 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checkwall(t_so_long *game)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < game->img_height)
	{
		if (game->map.map[height][width] != '1')
			return (-1);
		height++;
	}
	height = 0;
	width = 0;
	while (width < game->img_width)
	{
		if (game->map.map[height][width] != '1')
			return (-1);
		width++;
	}
	return (0);
}

int	checkwall2(t_so_long *game)
{
	int	height;
	int	width;

	height = 0;
	width = game->img_width - 1;
	while (height < game->img_height)
	{
		if (game->map.map[height][width] != '1')
			return (-1);
		height++;
	}
	height = game->img_height - 1;
	width = 0;
	while (width < game->img_width)
	{
		if (game->map.map[height][width] != '1')
			return (-1);
		width++;
	}
	return (0);
}

int	checkletters(t_so_long *game)
{
	int		height;
	int		width;
	char	c;

	height = 0;
	width = 0;
	while (height < game->img_height)
	{
		while (width < game->img_width)
		{
			c = game->map.map[height][width];
			if (c != '0' && c != '1' && c != 'P' && c != 'C' && c != 'E')
				return (-1);
			width++;
		}
		height++;
		width = 0;
	}
	return (0);
}

int	checkmaparameters(t_so_long *game)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < game->img_height)
	{
		while (width < game->img_width)
		{
			if (game->map.map[height][width] == 'P')
				game->maperrors.plycount++;
			else if (game->map.map[height][width] == 'C')
				game->maperrors.colcount++;
			else if (game->map.map[height][width] == 'E')
				game->maperrors.extcount++;
			width++;
		}
		height++;
		width = 0;
	}
	if (game->maperrors.plycount != 1 || game->maperrors.colcount < 1
		|| game->maperrors.extcount < 1)
		return (-1);
	else
		return (0);
}

void	errors(t_so_long *game)
{
	if (checkwall(game) == -1 || checkwall2(game) == -1
		|| checkletters(game) == -1 || checkmaparameters(game) == -1
		|| checksquare(game) == -1)
	{
		printf("Error\n");
		printf("Your map is wrong!");
		exit (0);
	}
}
