/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:08:06 by nadesjar          #+#    #+#             */
/*   Updated: 2022/04/28 11:15:11 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <raylib.h>
#include <raymath.h>

void    collision_house(float colision_tile);

class Character
{
public:
	Character(int win_width, int win_height);


	Vector2	Get_world_pos(void)
	{
		return (world_pos);
	}
	;

	void	Get_last_frame(void);

	void	Tick(float delta_time);

	Rectangle	Get_collision_rec();

private:
	Texture2D	texture{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_idle_w{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_idle_a{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_idle_s{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_idle_d{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_diag_up_d{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_diag_up_a{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_diag_down_d{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_diag_down_a{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_a{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_d{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_down_s{LoadTexture("./sprites/player/character_01.png")};
	Texture2D	src_player_walk_down_w{LoadTexture("./sprites/player/character_01.png")};
	Vector2		world_pos{-520.0f, 425.0f};
	Vector2		speed_boost{10.25f, 10.25f};
	Vector2		world_pos_last_frame{};
	Vector2		screen_pos{};
	float		update_time{1.0f / 12.0f}; // Update 12x by sec
	float		face_counter{1.0f}; // Change direction for frame character
	float		base_speed{3.5f};
	float		walk_time{};
	float		width{};
	float		height{};
	float		scale_map{2.5f};
	float 		scale_player{1.55f};
	int			max_frame{6};   // Nb frame for the animation
	int			frame{}; // Current frame from sprite sheet
};

#endif
