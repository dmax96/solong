/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:53:06 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/11/30 14:18:53 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "./libft/libft.h"

typedef struct s_map
{
	char	**map;
}	t_map;

typedef struct s_player
{
	int		horizontal;
	int		vertical;
	t_map	map;

}	t_player;

typedef struct s_errors
{
	int		colcount;
	int		plycount;
	int		extcount;

}	t_errors;

typedef struct s_so_long
{
	t_map		map;
	t_player	myplayer;
	t_errors	maperrors;

	void		*mlx;
	void		*window;

	void		*path;
	void		*wall;
	void		*playerdown;
	void		*playerup;
	void		*playerleft;
	void		*playerright;
	void		*collect;
	void		*exitus;

	int			collectible;
	int			colsum;

	int			steps;

	char		*rel_path_path;
	char		*rel_path_wall;
	char		*rel_path_ply;
	char		*rel_path_plydown;
	char		*rel_path_plyleft;
	char		*rel_path_plyright;
	char		*rel_path_col;
	char		*rel_path_exi;

	int			img_width;
	int			img_height;
	int			i;
	int			j;

}	t_so_long;

void	ft_load_img(t_so_long *game);
void	putplayer(int width, int height, t_so_long *game);
void	putcollect(int width, int height, t_so_long *game);
void	putwall(int x, int y, t_so_long *wall);
void	putpath(int x, int y, t_so_long *path);
void	putplayer_up(int x, int y, t_so_long *playerimg);
void	put_collect(int x, int y, t_so_long *collect);
void	putexit(int x, int y, t_so_long *exitus);
void	putplayer_down(int x, int y, t_so_long *playerimg);
void	putplayer_left(int x, int y, t_so_long *playerimg);
void	putplayer_right(int x, int y, t_so_long *playerimg);
int		playermove(int keycode, t_so_long *game);
void	ft_up(t_so_long *game);
void	ft_left(t_so_long *game);
void	ft_down(t_so_long *game);
void	ft_right(t_so_long *game);
void	updatemap(int x, int y, t_so_long *mypath);
void	updatefield(int height, int width, t_so_long *game);
void	updatefield_down(int x, int y, t_so_long *mypath);
void	updatefield_right(int x, int y, t_so_long *mypath);
void	updatefield_left(int x, int y, t_so_long *mypath);
void	errors(t_so_long *game);
int		checkwall(t_so_long *game);
int		checkwall2(t_so_long *game);
int		checkletters(t_so_long *game);
int		checkmaparameters(t_so_long *game);
int		checksquare(t_so_long *game);
int		exitgame(void);
void	check_up(t_so_long *game, int height, int width);
void	check_down(t_so_long *game, int height, int width);
void	check_left(t_so_long *game, int height, int width);
void	check_right(t_so_long *game, int height, int width);
void	count_steps(t_so_long *game);
void	count_collectible(t_so_long *game);
void	check_collectible(t_so_long *game);
int		count_mapunit(char **argv);
void	readmap(t_so_long *game, char **argv);
void	put_base(t_so_long *game);
void	putmap(t_so_long *game);
void	update_w(int width, int height, t_so_long *game);
void	update_a(int width, int height, t_so_long *game);
void	update_s(int width, int height, t_so_long *game);
void	update_d(int width, int height, t_so_long *game);

#endif
