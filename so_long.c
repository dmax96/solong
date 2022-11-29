/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:24:16 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 17:28:01 by lorenzodima      ###   ########.fr       */
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

void	readmap(t_so_long *mygame, char **argv)
{
	int		fdnbr;
	int		linenbr;
	char	*str;

	linenbr = count_mapunit(argv);
	fdnbr = open(argv[1], O_RDONLY);
	mygame->map.map = (char **)malloc(linenbr * sizeof(char *));
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break ;
		mygame->map.map[linenbr] = str;
		linenbr++;
	}
	close(fdnbr);
	mygame->img_height = linenbr;
	mygame->img_width = ft_strlen(mygame->map.map[0]);
}

void	put_base(t_so_long *mygame)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < mygame->img_height)
	{
		while (width < mygame->img_width)
		{
			putpath(width, height, mygame);
			width++;
		}
		height++;
		width = 0;
	}
}

void	putmap(t_so_long *mygame)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	while (height < mygame->img_height)
	{
		while (width < mygame->img_width)
		{
			if (mygame->map.map[height][width] == '1')
				putwall(width, height, mygame);
			else if (mygame->map.map[height][width] == 'P')
				putplayer(width, height, mygame);
			else if (mygame->map.map[height][width] == 'C')
				putcollect(width, height, mygame);
			else if (mygame->map.map[height][width] == 'E')
				putexit(width, height, mygame);
			width++;
		}
		height++;
		width = 0;
	}
}

int	main(int argc, char **argv)
{
	t_so_long	mygame;

	if (argc != 2)
		return (0);
	ft_memset(&mygame, 0, sizeof(t_so_long));
	readmap(&mygame, argv);
	mygame.mlx = mlx_init();
	mygame.window = mlx_new_window(mygame.mlx, (mygame.img_width * 100),
			(mygame.img_height * 100), "so_long");
	errors(&mygame);
	ft_load_img(&mygame);
	put_base(&mygame);
	putmap(&mygame);
	mlx_hook(mygame.window, 2, (1L << 0), playermove, &mygame);
	mlx_hook(mygame.window, 17, (1L << 17), exitgame, &mygame);
	mlx_loop(mygame.mlx);
	return (0);
}
