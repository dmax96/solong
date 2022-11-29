/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectexit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:50:07 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:30:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_collectible(t_so_long *game)
{
	int	screencol;

	game->collectible--;
	screencol = game->colsum - game->collectible;
}

void	check_collectible(t_so_long *game)
{
	if (game->collectible == 0)
	{
		exit (0);
	}
}

void	count_steps(t_so_long *game)
{
	char	*putsteps;
	int		steps_width;
	int		steps_height;

	game->steps++;
	printf("Steps taken: %d\n", game->steps);
	steps_width = 50;
	steps_height = 50;
	putsteps = ft_itoa(game->steps);
	mlx_string_put(game->mlx, game->window, steps_width, steps_height, 24573, putsteps);
}

void	ft_show_step(t_so_long *game)
{
	char	*putsteps;
	int		steps_width;
	int		steps_height;

	steps_width = 50;
	steps_height = 50;
	putsteps = ft_itoa(game->steps);
	mlx_string_put(game->mlx, game->window, steps_width, steps_height, 24573, putsteps);
}

/*int	ft_checkmap_p(t_so_long *game)
{
	int	height;
	int	width;
	int	count;

	count = 0;
	height = 0;
	while (height < game->img_height)
	{
		width = 0;
		while (width < game->img_width)
		{
			if (game->map.map[height][width] == 'P')
				count++;
			width++;
		}
		height++;
	}
	if (count > 1)
	{
		return (-1);
	}
	return (0);
}*/
