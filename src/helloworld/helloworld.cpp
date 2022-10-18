#include <helloworld.h>

void hello(int x) 
{
  std::cout << "Hello, world! " << x << std::endl; 
}

std::string greeting(std::string name) 
{
  return "Welcome, " + name;
}
