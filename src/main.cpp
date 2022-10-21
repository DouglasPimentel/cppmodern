#include <helloworld.h>
#include <fibonacci.h>

int main() 
{
  int count = 5;

  for (int i = 0; i <= count; i++)     
    hello(i);

  std::cout << std::endl;

  std::cout << greeting("John Doe") << std::endl;

  std::cout << std::endl; 

  std::cout << fibonacci(11) << std::endl;

  std::cout << fibonacci_2(12) << std::endl;

  return 0;
}
