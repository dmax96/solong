/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzodimascia <lorenzodimascia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:57:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/29 17:28:01 by lorenzodima      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	update_w(int width, int height, t_so_long *mygame)
{
	updatemap(width, height, mygame);
	updatefield(width, height, mygame);
}

void	update_a(int width, int height, t_so_long *mygame)
{
	updatemap(width, height, mygame);
	updatefield_left(width, height, mygame);
}

void	update_s(int width, int height, t_so_long *mygame)
{
	updatemap(width, height, mygame);
	updatefield_down(width, height, mygame);
}

void	update_d(int width, int height, t_so_long *mygame)
{
	updatemap(width, height, mygame);
	updatefield_right(width, height, mygame);
}
