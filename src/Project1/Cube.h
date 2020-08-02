#pragma once
#include "raylib.h"
#include "Node.h"

class Cube : public Node
{
public:
	
	int size;
	Color color;
	int count;

	Cube();

	Cube(Vector2 Position, int Size, Color Color)
	{
		position = Position;
		size = Size;
		color = Color;
	}


	void Init(Vector2 Position, int Size, Color Color)
	{
		position = Position;
		size = Size;
		color = Color;
	}


	void Show()
	{
		DrawRectangle(position.x, position.y , size, size, GRAY);
		size = size - ((size / 10) * 2);
		DrawRectangle(position.x + (size / 10), position.y + (size / 10), size, size, color);
		
		DrawText(FormatText("%i", count), position.x + size / 2, position.y + size / 2, size/2, WHITE);
	}
};