#pragma once
#include "raylib.h"

class Node
{
public:
	Node();
	
	Node(Vector2 pos)
	{
		this->position = pos;
	}

	~Node();

	Vector2 position;

};

