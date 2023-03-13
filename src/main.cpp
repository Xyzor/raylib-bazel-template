#include <iostream>
#include "include/raylib.h"
#include "helloWorld.h"

int main()
{
	int screenWidth = 400;
	int screenHeight = 200;

	InitWindow(screenWidth, screenHeight, "Hello, World!");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText(greeting.c_str(), screenWidth / 2, screenHeight / 2, 20, BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}