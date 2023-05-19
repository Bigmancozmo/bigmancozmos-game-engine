#include "Renderer.h"

Renderer::Renderer()
{
}

void Renderer::clear()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer::clear(int r, int g, int b)
{
	glClearColor((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}
