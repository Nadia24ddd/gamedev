/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prop.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:40:55 by nadesjar          #+#    #+#             */
/*   Updated: 2022/05/02 14:24:31 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prop.h"

Prop::Prop(Vector2 pos, Texture2D tex) :
	world_pos(pos),
	texture(tex)
{
	
}

void Prop::Render(Vector2 player_pos)
{
	Vector2	screen_pos {Vector2Subtract(world_pos, player_pos)};
	DrawTextureEx(texture, screen_pos, 0.0f, scale, WHITE);
}

Rectangle Prop::Get_collision_rec(Vector2 player_pos)
{
	Vector2 screen_pos{Vector2Subtract(world_pos, player_pos)};
	return Rectangle{
		//64.0f, 64.0f, 64.0f, 64.0f
		screen_pos.x,
		screen_pos.y - 25,
		(float)texture.width * 0.80f,
		(float)texture.height * 0.35f
	};
}