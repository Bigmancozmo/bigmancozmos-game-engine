#include "Window.h"

Window::Window(const char* title, int width, int height)
{
	if (!create(title, width, height)) {
		cout << "Failed to create window!" << endl;
	}
}

Window::Window(const char* title, Vector2 size)
{
	if (!create(title, size.x, size.y)) {
		cout << "Failed to create window!" << endl;
	}
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(window);
}

void Window::update()
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

Window::~Window()
{
	glfwDestroyWindow(window);
}

bool Window::create(const char* title, int width, int height)
{
	monitor = glfwGetPrimaryMonitor();
	vidMode = glfwGetVideoMode(monitor);
	
	glfwDefaultWindowHints();
	glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);

	window = glfwCreateWindow(width, height, title, NULL, NULL);

	if (window == NULL) {
		return false;
	}

	int xPos = (vidMode->width / 2) - (width / 2);
	int yPos = (vidMode->height / 2) - (height / 2);
	glfwSetWindowPos(window, xPos, yPos);
	glfwMakeContextCurrent(window);
	gladLoadGL();
	glfwShowWindow(window);

	return true;
}
