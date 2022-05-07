/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:08:33 by nadesjar          #+#    #+#             */
/*   Updated: 2022/05/06 23:22:27 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROP_H
# define PROP_H

#include <raylib.h>
#include <raymath.h>

class Prop
{
public:
    Prop(Vector2 pos, Texture2D tex);

    void Render(Vector2 player_pos);

    Rectangle Get_collision_rec(Vector2 player_pos);

private:
    Texture2D texture{LoadTexture("test_collision.png")};
    Vector2 world_pos{};
    float scale{1.75f};
};

#endif