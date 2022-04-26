#include <raylib.h>

//Variable globales
int 	circle_x = 		600;
int 	circle_y = 		400;
int 	p1_x = 			10;
int 	p1_y = 			350;
int 	p2_x = 			1175;
int 	p2_y = 			350;
int		move_p1_y_max = 450;
int		move_p1_y_min = 350;
int 	move_p2_y_max = 450;
int 	move_p2_y_min = 350;
int		ct = 			-1;
int		ct_start = 		0;
float	ct_down = 	0;
void	draw_start(Texture2D background);

//Fonctions
void 	draw_end(int point_p1, int point_p2);
void 	draw_start(Texture2D background);
void	game_logic_p1(void);
void	game_logic_p2(void);
void	playeur_ctrl(void);
void	restart_game(void);
void 	move_on_hit(void);

int main()
{
	int	point_p1 = 0;
	int point_p2 = 0;
	InitWindow(1200, 800, "PONG V.42");
	Texture2D background = LoadTexture("terrain_pong_01.png");

	SetTargetFPS(60);

	while (!IsKeyDown(KEY_ESCAPE))
	{
		draw_start(background);
		if (IsKeyPressed(KEY_SPACE))
			ct_start = 1;

		//Count points
		if (circle_x == -50)
			point_p2 += 1;
		if (circle_x == 1250)
			point_p1 += 1;

		// Game logic begin
		if (ct == -1) //P1
		{
			game_logic_p1();
			playeur_ctrl();
		}
		if (ct == 1) //P2
		{
			game_logic_p2();
			playeur_ctrl();
		}
		if (ct_start == 0)
			DrawText("Press space to begin", 400, 300, 40, RED);
		draw_end(point_p1, point_p2);
	}
	UnloadTexture(background);
	return 0;
}

void	playeur_ctrl(void)
{
	if (IsKeyDown(KEY_W) && p1_y >= 8)
	{
		p1_y -= 5;
		move_p1_y_max -= 5;
		move_p1_y_min -= 5;
	}
	if (IsKeyDown(KEY_S) && p1_y <= 690)
	{
		p1_y += 5;
		move_p1_y_min += 5;
		move_p1_y_max += 5;
	}
	if (IsKeyDown(KEY_UP) && p2_y >= 8)
	{
		p2_y -= 5;
		move_p2_y_max -= 5;
		move_p2_y_min -= 5;
	}
	if (IsKeyDown(KEY_DOWN) && p2_y <= 690)
	{
		p2_y += 5;
		move_p2_y_max += 5;
		move_p2_y_min += 5;
	}
}

void	move_on_hit(void)
{
	if (IsKeyDown(KEY_S))
	{
		ct_down += 1.5;
		if (ct_down < 0)
			ct_down = 0;
	}
	if (IsKeyDown(KEY_W))
	{
		ct_down -= 1.5;
		if (ct_down > 0)
			ct_down = 0;
	}
	if (IsKeyDown(KEY_DOWN))
	{
		ct_down += 1.5;
		if (ct_down < 0)
			ct_down = 0;
	}
	if (IsKeyDown(KEY_UP))
	{
		ct_down -= 1.5;
		if (ct_down > 0)
			ct_down = 0;
	}
}

void	restart_game(void)
{
	circle_x = 600;
	ct_down = 0;
	circle_y = 400;
	ct_start = 0;
}

void 	draw_start(Texture2D background)
{
	BeginDrawing();
	ClearBackground(GetColor(0x052c46ff));
	DrawTexture(background, 0, 0, WHITE);
	DrawCircle(circle_x, circle_y, 15, RED);
	DrawRectangle(p1_x, p1_y, 15, 100, RED); // p1
	DrawRectangle(p2_x, p2_y, 15, 100, RED); // p2
}

void 	draw_end(int point_p1, int point_p2)
{
	DrawText("Pong rebuilt by Nadia/nadesjar42", 10, 10, 20, RED);
	DrawText(TextFormat("SCORE P1: %i", point_p1), 40, 770, 20, RED);
	DrawText(TextFormat("SCORE P2: %i", point_p2), 1020, 760, 20, RED);
	EndDrawing();
}

void	game_logic_p1(void)
{
	if ((circle_x >= 10 && circle_x <= 30) && (circle_y >= move_p1_y_min && circle_y <= move_p1_y_max))
	{
		move_on_hit();
		ct = 1;
	}

	// Deplacement horizontale
	if (ct_start == 1)
		circle_x = circle_x - 10;

	if (circle_x < -200)
		restart_game();

	// Move balle up/down logic
	if (ct_down != 0)
		circle_y += ct_down;

	// Collision haut/bas
	if (circle_y > 792)
		ct_down *= -1;
	else if (circle_y < 8)
		ct_down *= -1;
}

void game_logic_p2(void)
{
	if ((circle_x >= 1170 && circle_x <= 1190) && (circle_y >= move_p2_y_min && circle_y <= move_p2_y_max))
	{
		move_on_hit();
		ct = -1;
	}

	// Deplacement horizontale
	if (ct_start == 1)
		circle_x = circle_x + 10;

	if (circle_x > 1400)
		restart_game();

	// Move balle up/down logic
	if (ct_down != 0)
		circle_y += ct_down;

	// Collision haut/bas
	if (circle_y > 792)
		ct_down *= -1;
	else if (circle_y < 8)
		ct_down *= -1;
}
