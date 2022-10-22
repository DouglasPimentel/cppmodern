#include <gtest/gtest.h>
#include <helloworld.h>
#include <fibonacci.h>

TEST(HelloWorldTest, BasicAssertions) {
  std::string msg = greeting("John Doe");
  EXPECT_EQ(msg, "Welcome, John Doe");
}

TEST(FibonacciTest, BasicAssertion) {
  EXPECT_EQ(55, fibonacci(10));
  EXPECT_EQ(144, fibonacci_2(12));
}