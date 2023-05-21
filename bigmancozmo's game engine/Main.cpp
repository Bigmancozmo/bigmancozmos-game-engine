#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "engine/Window.h"
#include "engine/Renderer.h"
#include "engine/framework/Framework.h"
#include <Windows.h>

using namespace std;

int main() {
	auto consoleWindow = GetConsoleWindow(); // ok boomer
	FreeConsole();
	PostMessage(consoleWindow, WM_CLOSE, 0, 0);

	if (!glfwInit()) {
		cout << "Failed to initialize GLFW!" << endl;
	}
	
	Window window = Window("bigmancozmo's game engine", 800, 600);
	Renderer renderer = Renderer();

	cout << "Started!" << endl;

	while (!window.shouldClose()) {
		renderer.clear(54, 123, 43);
		window.update();
	}
	
	Vector2().x;

	window.~Window();
	glfwTerminate();

	return 0;
}
