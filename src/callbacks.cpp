#include <GLFW/glfw3.h>
#include <iostream>
#include <globals.h>

void glfwWindowSizeCallback(GLFWwindow* window, int width, int height) {
    WindowSizeX = width;
    WindowSizeY = height;
    glViewport(0, 0, WindowSizeX, WindowSizeY);
    std::cout << WindowSizeX << std::endl;
    std::cout << WindowSizeY << std::endl;
}

void glfwKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mode) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GL_TRUE);
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}