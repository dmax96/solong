/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectexit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:50:07 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/30 11:01:59 by ldi-masc         ###   ########.fr       */
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
	game->steps++;
	printf("Steps taken: %d\n", game->steps);
}
