#include <iostream>
#include <GLFW/glfw3.h>

GLFWwindow* StartGLFW();

int main(){
    GLFWwindow* window = StartGLFW();

    std::cout<<"Works!"<<std::endl;

    while(!glfwWindowShouldClose(window)){

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}

GLFWwindow* StartGLFW(){
    if(!glfwInit()){
        std::cerr<<"failed to initialize glfw, panic!"<<std::endl;
        return nullptr;
    }
    GLFWwindow* window = glfwCreateWindow(800, 600, "planetary_sim", NULL, NULL);

    return window;
};