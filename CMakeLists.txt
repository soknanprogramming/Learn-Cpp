cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add GLFW headers
include_directories(include)
# Add GLFW library directory
link_directories(lib)

# Create executable
add_executable(my_app src/main.cpp)

# Link GLFW and OpenGL
target_link_libraries(my_app 
    glfw3
    vulkan-1 )