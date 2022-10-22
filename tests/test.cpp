#include <gtest/gtest.h>
#include <helloworld.h>
#include <fibonacci.h>

TEST(HelloWorldTest, BasicAssertions)
{
  std::string msg = greeting("John Doe");
  EXPECT_EQ(msg, "Welcome, John Doe");
}

TEST(FibonacciTest, HandlesPositiveInput)
{
  EXPECT_EQ(1, fibonacci(1));
  EXPECT_EQ(1, fibonacci(2));
  EXPECT_EQ(55, fibonacci(10));
  EXPECT_EQ(144, fibonacci_2(12));
}