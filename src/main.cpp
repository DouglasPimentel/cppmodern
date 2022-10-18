#include <helloworld.h>

int main() 
{
  int count = 5;

  for (int i = 0; i <= count; i++)     
    hello(i);

  std::cout << std::endl;

  std::cout << greeting("John Doe") << std::endl;

  return 0;
}
