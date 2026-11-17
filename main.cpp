#include <iostream>

#include <cmath>

#include "Lib\glfw-3.4.bin.WIN64\include\glfw3.h"

GLFWwindow* StartGLFW();

int main(){

    return 0;
    
}

GLFWwindow* StartGLFW(){
    if(!glfwInit()){
        std::cerr << "Failed to initialize glfw, panic!" << std::endl;
        return nullptr;
    }
    GLFWwindow* window = glfwCreateWindow(800, 600, "physics_sim", NULL, NULL);
    
    return window;
};