cmake_minimum_required(VERSION 3.10)

# Set some basic project attributes
project (vulkan_renderer
	VERSION 0.1
	DESCRIPTION "A Hello World Project")

# This project will output an executable file
add_executable(${PROJECT_NAME} vulkan_renderer.cpp MyApplication.cpp)

# Create a simple configuration header
configure_file(config.h.in config.h)

# Include the configuration header in the build
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

# Vulkan
find_package(Vulkan REQUIRED FATAL_ERROR)
find_package(glfw3 REQUIRED FATAL_ERROR)

target_include_directories (${PROJECT_NAME} 
    PUBLIC ${GLFW_INCLUDE_DIRS}
    PUBLIC ${VULKAN_INCLUDE_DIRS}
)
target_link_libraries (${PROJECT_NAME} glfw Vulkan::Vulkan)
target_link_libraries (${PROJECT_NAME} ${VULKAN_LIB_LIST})
