#include <fibonacci.h>

int fibonacci_2(int n) 
{
  if (n == 1)
    return 1;

  if(n == 2)
    return 1;

  return fibonacci_2(n-1) + fibonacci_2(n-2);    
}