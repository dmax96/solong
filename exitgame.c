/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitgame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:58:18 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/29 16:54:36 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	ft_exitgame(void)
{
	exit (0);
}

void	ft_check_w(t_so_long *mygame, int iheight, int jwidth)
{
	ft_countcol(mygame);
	putpath(jwidth, iheight - 1, mygame);
	updatefield(jwidth, iheight, mygame);
	mygame->map.map[iheight - 1][jwidth] = '0';
}

void	ft_check_s(t_so_long *mygame, int iheight, int jwidth)
{
	ft_countcol(mygame);
	putpath(jwidth, iheight + 1, mygame);
	updatemap(jwidth, iheight, mygame);
	updatefield_down(jwidth, iheight, mygame);
	mygame->map.map[iheight + 1][jwidth] = '0';
}

void	ft_check_a(t_so_long *mygame, int iheight, int jwidth)
{
	ft_countcol(mygame);
	putpath(jwidth - 1, iheight, mygame);
	updatemap(jwidth, iheight, mygame);
	updatefield_left(jwidth, iheight, mygame);
	mygame->map.map[iheight][jwidth - 1] = '0';
}

void	ft_check_d(t_so_long *mygame, int iheight, int jwidth)
{
	ft_countcol(mygame);
	putpath(jwidth + 1, iheight, mygame);
	updatefield_right(jwidth, iheight, mygame);
	mygame->map.map[iheight][jwidth + 1] = '0';
}
