/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2014 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "Project1\Cube.h"

int main(int argc, char* argv[])
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 1280;
    int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
		const int SIZE = 2000;
		
		Cube grid [SIZE] = {};

		int count = 0;

		Vector2 spawningPos;
		int cubeSize = 40;
		int cubeGrid = 11;
		Vector2 startingPos = {(screenWidth/2 - (cubeSize * cubeGrid)/2),  (screenHeight/2 - (cubeSize * cubeGrid)/2) };


		for (int i = 0; i < cubeGrid; i++)
		{
			for (int j = 0; j < cubeGrid; j++)
			{
				spawningPos.x = startingPos.x + i + (i * cubeSize);
				spawningPos.y = startingPos.y + j + (j * cubeSize);
				grid[count].Init(spawningPos, cubeSize, LIGHTGRAY);
				grid[count].count = count;
				count += 1;

			}

		}
		int screenWidth = 50;
		//DrawTriangleLines()
		Vector2 point = { screenWidth / 4 * 3, 160 };
		Vector2 side1 = { screenWidth / 4 * 3 - 5, 180 };
		Vector2 side2 = { screenWidth / 4 * 3 + 5, 180 };


        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);
		for (int i = 0; i < SIZE; i++)
		{
			grid[i].Show();
		}

		//DrawRectangle(242, 242, 10, 10, LIME);


		DrawTriangleLines(point, side1, side2, LIME);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------   
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}