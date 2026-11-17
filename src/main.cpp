#include <iostream>
#include <GLFW/glfw3.h>


int main() {
    // 1. Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // 2. Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLFW Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    // 3. Make the window's context current
    glfwMakeContextCurrent(window);

    // 4. Main render loop
    while (!glfwWindowShouldClose(window)) {
        // Clear the screen with a dark teal color
        glClearColor(0.1f, 0.2f, 0.25f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events (keyboard, mouse, window close)
        glfwPollEvents();
    }

    // 5. Clean up and exit
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}