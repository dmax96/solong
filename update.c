/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:57:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/29 16:54:36 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <stdio.h>

void	ft_update_w(int jwidth, int iheight, t_so_long *mygame)
{
	updatemap(jwidth, iheight, mygame);
	updatefield(jwidth, iheight, mygame);
}

void	ft_update_a(int jwidth, int iheight, t_so_long *mygame)
{
	updatemap(jwidth, iheight, mygame);
	updatefield_left(jwidth, iheight, mygame);
}

void	ft_update_s(int jwidth, int iheight, t_so_long *mygame)
{
	updatemap(jwidth, iheight, mygame);
	updatefield_down(jwidth, iheight, mygame);
}

void	ft_update_d(int jwidth, int iheight, t_so_long *mygame)
{
	updatemap(jwidth, iheight, mygame);
	updatefield_right(jwidth, iheight, mygame);
}
