/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:57:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/28 11:21:42 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <stdio.h>

void	ft_update_w(int jwidth, int iheight, t_so_long *mygame)
{
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield(jwidth, iheight, mygame);
}

void	ft_update_a(int jwidth, int iheight, t_so_long *mygame)
{
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield_left(jwidth, iheight, mygame);
}

void	ft_update_s(int jwidth, int iheight, t_so_long *mygame)
{
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield_down(jwidth, iheight, mygame);
}

void	ft_update_d(int jwidth, int iheight, t_so_long *mygame)
{
	ft_updatemap(jwidth, iheight, mygame);
	ft_currentfield_right(jwidth, iheight, mygame);
}
