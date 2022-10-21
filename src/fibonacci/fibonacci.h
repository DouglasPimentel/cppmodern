#ifndef FIBONACCI_H
#define FIBONACCI_H

constexpr int fibonacci(const int n) 
{
  return n == 1 || n == 2 ? 1 : fibonacci(n-1) + fibonacci(n-2); 
}


int fibonacci_2(int n);

#endif // FIBONACCI_H