#pragma once
#include "glad/glad.h"

class Renderer
{
public:
	Renderer();
	void clear();
	void clear(int r, int g, int b);
};
