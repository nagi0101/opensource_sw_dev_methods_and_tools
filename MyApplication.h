/*
 * MyApplication.h
 *
 *  Created on: Sep 17, 2023
 *      Author: nagi0101
 */

#ifndef MYAPPLICATION_H_
#define MYAPPLICATION_H_

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class MyApplication {
public:
    void run();

private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

public:
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;

private:
    GLFWwindow* window;
};

#endif /* MYAPPLICATION_H_ */
