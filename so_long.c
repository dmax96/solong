/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:13:16 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 11:13:18 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "so_long.h"

int	count_mapunit(char **argv)
{
	int		fdnbr;
	int		linenbr;
	char	*str;

	fdnbr = open(argv[1], O_RDONLY);
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break ;
		free (str);
		linenbr++;
	}
	close(fdnbr);
	return (linenbr);
}

void	readmap(t_so_long *game, char **argv)
{
	int		fdnbr;
	int		linenbr;
	char	*str;

	linenbr = count_mapunit(argv);
	fdnbr = open(argv[1], O_RDONLY);
	game->map.map = (char **)malloc(linenbr * sizeof(char *));
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break ;
		game->map.map[linenbr] = str;
		linenbr++;
	}
	close(fdnbr);
	game->img_height = linenbr;
	game->img_width = ft_strlen(game->map.map[0]);
}

void	put_base(t_so_long *game)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < game->img_height)
	{
		while (width < game->img_width)
		{
			putpath(width, height, game);
			width++;
		}
		height++;
		width = 0;
	}
}

void	putmap(t_so_long *game)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < game->img_height)
	{
		while (width < game->img_width)
		{
			if (game->map.map[height][width] == '1')
				putwall(width, height, game);
			else if (game->map.map[height][width] == 'P')
				putplayer(width, height, game);
			else if (game->map.map[height][width] == 'C')
				putcollect(width, height, game);
			else if (game->map.map[height][width] == 'E')
				putexit(width, height, game);
			width++;
		}
		height++;
		width = 0;
	}
}

int	main(int argc, char **argv)
{
	t_so_long	game;

	if (argc != 2)
		return (0);
	ft_memset(&game, 0, sizeof(t_so_long));
	readmap(&game, argv);
	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, (game.img_width * 100),
			(game.img_height * 100), "so_long");
	errors(&game);
	ft_load_img(&game);
	put_base(&game);
	putmap(&game);
	mlx_hook(game.window, 2, (1L << 0), playermove, &game);
	mlx_hook(game.window, 17, (1L << 17), exitgame, &game);
	mlx_loop(game.mlx);
	return (0);
}
