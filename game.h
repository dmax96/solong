/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:50:58 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 16:19:39 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include "minilibx/mlx.h"
# include "./libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>

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

void	ft_load_img(t_so_long *mygame);
void	putplayer(int jwidth, int iheight, t_so_long *mygame);
void	putcollect(int jwidth, int iheight, t_so_long *mygame);
void	putwall(int x, int y, t_so_long *wall);
void	putpath(int x, int y, t_so_long *path);
void	putplayer_up(int x, int y, t_so_long *playerimg);
void	put_collect(int x, int y, t_so_long *collect);
void	putexit(int x, int y, t_so_long *exitus);
void	putplayer_down(int x, int y, t_so_long *playerimg);
void	putplayer_left(int x, int y, t_so_long *playerimg);
void	putplayer_right(int x, int y, t_so_long *playerimg);
int		playermove(int keycode, t_so_long *mygame);
void	ft_up(t_so_long *mygame);
void	ft_left(t_so_long *mygame);
void	ft_down(t_so_long *mygame);
void	ft_right(t_so_long *mygame);
void	updatemap(int x, int y, t_so_long *mypath);
void	updatefield(int iheight, int jwidth, t_so_long *mygame);
void	updatefield_down(int x, int y, t_so_long *mypath);
void	updatefield_right(int x, int y, t_so_long *mypath);
void	updatefield_left(int x, int y, t_so_long *mypath);
void	errors(t_so_long *mygame);
int		checkwall(t_so_long *mygame);
int		checkwall2(t_so_long *mygame);
int		checkletters(t_so_long *mygame);
int		checkmaparameters(t_so_long *mygame);
int		checksquare(t_so_long *mygame);
int		ft_exitgame(void);
void	ft_check_w(t_so_long *mygame, int iheight, int jwidth);
void	ft_check_s(t_so_long *mygame, int iheight, int jwidth);
void	ft_check_a(t_so_long *mygame, int iheight, int jwidth);
void	ft_check_d(t_so_long *mygame, int iheight, int jwidth);
void	ft_count_step(t_so_long *mygame);
void	ft_countcol(t_so_long *mygame);
void	ft_checkcol(t_so_long *mygame);
int		count_mapunit(char **argv);
void	ft_readmap(t_so_long *mygame, char **argv);
void	ft_map_base(t_so_long *mygame);
void	putmap(t_so_long *mygame);
void	ft_update_w(int jwidth, int iheight, t_so_long *mygame);
void	ft_update_a(int jwidth, int iheight, t_so_long *mygame);
void	ft_update_s(int jwidth, int iheight, t_so_long *mygame);
void	ft_update_d(int jwidth, int iheight, t_so_long *mygame);
#endif
