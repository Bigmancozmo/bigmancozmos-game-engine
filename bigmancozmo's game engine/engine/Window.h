#pragma once
#include "framework/Framework.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <iostream>

using namespace std;

class Window
{
public:
	Window(const char* title, int width, int height);
	Window(const char* title, Vector2 size);
	bool shouldClose();
	void update();
	~Window();
private:
	GLFWwindow* window;
	GLFWmonitor* monitor;
	const GLFWvidmode* vidMode;
	bool create(const char* title, int width, int height);
};
