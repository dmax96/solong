/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:57:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/29 16:23:28 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
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
