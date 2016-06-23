#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cassert>
#include <iostream>

int main(int argc, char ** argv)
{
  assert(glfwInit());
  auto window = glfwCreateWindow(512,
                                 512,
                                 "Nino tummies are safe!",
                                 nullptr,
                                 nullptr);
  glfwMakeContextCurrent(window);

  auto status = glewInit();
  assert(status == GLEW_OK);

  std::cerr << "Hello World!" << std::endl;

  glfwDestroyWindow(window);
  glfwTerminate();
}
