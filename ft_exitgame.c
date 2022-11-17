/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exitgame.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:58:18 by jzhou             #+#    #+#             */
/*   Updated: 2022/11/17 14:47:55 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int	ft_exitgame(void)
{
	exit (0);
}

void	ft_check_w(t_so_long *mygame, int iheight, int jwidth)
{
	mygame->myplayer.vertical--;
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield(jwidth, iheight, mygame);
	ft_checkcol(mygame);
	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
}

void	ft_check_s(t_so_long *mygame, int iheight, int jwidth)
{
	mygame->myplayer.vertical++;
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield(jwidth, iheight, mygame);
	ft_checkcol(mygame);
	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
}

void	ft_check_a(t_so_long *mygame, int iheight, int jwidth)
{
	mygame->myplayer.horizontal--;
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield(jwidth, iheight, mygame);
	ft_checkcol(mygame);
	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
}

void	ft_check_d(t_so_long *mygame, int iheight, int jwidth)
{
	mygame->myplayer.horizontal++;
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield(jwidth, iheight, mygame);
	ft_checkcol(mygame);
	mygame->steps++;
	printf("Steps taken: %d\n", mygame->steps);
}
