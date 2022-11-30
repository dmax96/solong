/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectexit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:16:51 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 14:21:58 by ldi-masc         ###   ########.fr       */
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
	int	i;

	game->steps++;
	i = game->steps;
	write(1, "\n Steps taken: ", 16);
	ft_putnbr_fd(i, 1);
}
