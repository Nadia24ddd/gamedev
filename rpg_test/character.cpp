#include "character.h"

Character::Character(int win_width, int win_height)
{
    width = texture.width / max_frame;
    height = texture.height / 25;

    screen_pos = {((static_cast<float>(win_width) / 2.0f) - scale_map * (0.5f * width)),
                  ((static_cast<float>(win_height) / 2.0f) - scale_map * (0.5f * height))};
}

void Character::Tick(float delta_time)
{
    world_pos_last_frame = world_pos;
    
    Vector2 direction{};
    if (IsKeyDown(KEY_D))
    {
        direction.x += base_speed;
        if (IsKeyDown(KEY_LEFT_SHIFT))
            direction.x -= speed_boost.x;
    }
    if (IsKeyDown(KEY_A))
    {
        direction.x -= base_speed;
        if (IsKeyDown(KEY_LEFT_SHIFT))
            direction.x += speed_boost.x;
    }
    if (IsKeyDown(KEY_W))
    {
        direction.y -= base_speed;
        if (IsKeyDown(KEY_LEFT_SHIFT))
            direction.y += speed_boost.y;
    }
    if (IsKeyDown(KEY_S))
    {
        direction.y += base_speed;
        if (IsKeyDown(KEY_LEFT_SHIFT))
            direction.y -= speed_boost.y;
    }

    if (Vector2Length(direction) != 0.0f)
    {
        // set world_pos = world_pos + direction

        world_pos = Vector2Add(world_pos, Vector2Scale(Vector2Normalize(direction), base_speed));
    }

    // Update animation
    walk_time += delta_time;
    if (walk_time >= update_time)
    {
        frame++;
        walk_time = 0.0f;
        if (frame > max_frame)
            frame = 0;
    }

    // Draw character
    Rectangle dest_player{screen_pos.x, screen_pos.y, scale_player * width, scale_player * height};
    if (direction.x == 0 && direction.y == 0)
    {
        // Idle
        if (face_counter == 1.0f)
        {
            Rectangle src_player_idle_d{width * frame,  192.0f, width, height};
            DrawTexturePro(texture, src_player_idle_d, dest_player, Vector2{}, 0.0f, WHITE);
        }
        else if (face_counter == 2.0f)
        {
            Rectangle src_player_idle_a{width * frame, 128.0f, width, height};
            DrawTexturePro(texture, src_player_idle_a, dest_player, Vector2{}, 0.0f, WHITE);
        }
        else if (face_counter == 3.0f)
        {
            Rectangle src_player_idle_w{width * frame, 64.0f, width, height};
            DrawTexturePro(texture, src_player_idle_w, dest_player, Vector2{}, 0.0f, WHITE);
        }
        else if (face_counter == 4.0f)
        {
            Rectangle src_player_idle_s{width * frame, 0.0f, width, height};
            DrawTexturePro(texture, src_player_idle_s, dest_player, Vector2{}, 0.0f, WHITE);
        }
    }
    else
    {
        // Diagonale up
        if (IsKeyDown(KEY_W) && IsKeyDown(KEY_D))
        {
            Rectangle src_player_walk_diag_up_d{width * frame, 1472.0f, width, height};
            DrawTexturePro(texture, src_player_walk_diag_up_d, dest_player, Vector2{}, 0.0f, WHITE);
        }
        else if (IsKeyDown(KEY_W) && IsKeyDown(KEY_A))
        {
            Rectangle src_player_walk_diag_up_a{width * frame, 1408.0f, width, height};
            DrawTexturePro(texture, src_player_walk_diag_up_a, dest_player, Vector2{}, 0.0f, WHITE);
        }

        // Diagonale Down
        else if (IsKeyDown(KEY_S) && IsKeyDown(KEY_A))
        {
            Rectangle src_player_walk_diag_down_a{width * frame, 1280.0f, width, height};
            DrawTexturePro(texture, src_player_walk_diag_down_a, dest_player, Vector2{}, 0.0f, WHITE);
        }
        else if (IsKeyDown(KEY_S) && IsKeyDown(KEY_D))
        {
            Rectangle src_player_walk_diag_down_d{width * frame, 1344.0f, width, height};
            DrawTexturePro(texture, src_player_walk_diag_down_d, dest_player, Vector2{}, 0.0f, WHITE);
        }

        // Right / Left
        else if (IsKeyDown(KEY_A))
        {
            Rectangle src_player_walk_a{width * frame, 1152.0f, width, height};
            DrawTexturePro(texture, src_player_walk_a, dest_player, Vector2{}, 0.0f, WHITE);
            face_counter = 2;
        }
        else if (IsKeyDown(KEY_D))
        {
            Rectangle src_player_walk_d{(float)texture.width / 6.0f * frame, 1216.0f, width, height};
            DrawTexturePro(texture, src_player_walk_d, dest_player, Vector2{}, 0.0f, WHITE);
            face_counter = 1;
        }
        // Up / Down
        else if (IsKeyDown(KEY_S))
        {
            Rectangle src_player_walk_down_s{width * frame, 1024.0f, width, height};
            DrawTexturePro(texture, src_player_walk_down_s, dest_player, Vector2{}, 0.0f, WHITE);
            face_counter = 4;
        }
        else if (IsKeyDown(KEY_W))
        {
            Rectangle src_player_walk_up_w{width * frame, 1088.0f, width, height};
            DrawTexturePro(texture, src_player_walk_up_w, dest_player, Vector2{}, 0.0f, WHITE);
            face_counter = 3;
        }
    }
}

void    Character::Get_last_frame()
{
    world_pos = world_pos_last_frame;
}

Rectangle Character::Get_collision_rec()
{
    return Rectangle{
       // 64.0f, 64.0f, 64.0f, 64.0f
        screen_pos.x,
        screen_pos.y,
        width * 1.0f,
        height * 1.0f
    };
}
