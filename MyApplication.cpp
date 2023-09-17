/*
 * MyApplication.cpp
 *
 *  Created on: Sep 17, 2023
 *      Author: nagi0101
 */
#include "MyApplication.h"

void MyApplication::run(){
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void MyApplication::initWindow(){
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void MyApplication::cleanup(){
	glfwDestroyWindow(window);

	glfwTerminate();
}

void MyApplication::initVulkan(){}
void MyApplication::mainLoop(){
	while(!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
}
