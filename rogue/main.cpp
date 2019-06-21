#include <iostream>
#include "graphics/vertex_buffer.h"


void display(GLFWwindow* window)
{
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
}


int main()
{
	if (!glfwInit())
	{
		std::cout << "GLFW FAILED TO INITIALIZED" << std::endl;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);

	GLFWwindow* window = glfwCreateWindow(800, 600, "This is a window", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	glfwSwapInterval(1);
	unsigned vbo;
	std::cout << "Buffer before: " << vbo << std::endl;
	glGenBuffers(1, &vbo);
	std::cout << "Buffer after: " << vbo << std::endl;

	while (!glfwWindowShouldClose(window))
	{
		glDrawArrays(GL_TRIANGLES, 0, 3);
		display(window);
		glfwSwapBuffers(window);
		glfwPollEvents();
		std::cout << glGetString(GL_VERSION) << std::endl;
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}