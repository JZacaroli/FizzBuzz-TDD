/**
 Joe Zacaroli - 31st March 2020
 FizzBuzz using GTest. https://www.udemy.com/course/beginning-test-driven-development-in-c/learn/lecture/9102298#notes
 */

#include <gtest/gtest.h>
#include <iostream>
#include "FizzBuzz.hpp"

/**
-------- TESTS -------- {x = TODO}
 
 1 - Successfully call FizzBuzz
 2 - Return "1" when I pass in 1.
 3 - Return "2" when I pass in 2.
 4 - Return "Fizz" when I pass in 3.
 5 - Return "Buzz" when I pass in 5.
 6 - Return "Fizz" when I pass in 6 (a multiple of 3)
 7 - Return "Buzz when I pass in 10 (a multiple of 5)
 x - Return "FizzBuzz" when I pass in 15.
 
 */


TEST(fizzbuzz_tests, Returns1When1PassedIn) {
    std::string result = fizzBuzz(1);
    ASSERT_EQ("1", result);
}

TEST(fizzbuzz_tests, Returns2When2PassedIn) {
    std::string result = fizzBuzz(2);
    ASSERT_EQ("2", result);
}

TEST(fizzbuzz_tests, ReturnsFizzWhen3PassedIn) {
    std::string result = fizzBuzz(3);
    ASSERT_EQ("Fizz", result);
}

TEST(fizzbuzz_tests, ReturnsBuzzWhen5PassedIn) {
    std::string result = fizzBuzz(5);
    ASSERT_EQ("Buzz", result);
}

TEST(fizzbuzz_tests, ReturnsFizzWhen6PassedIn) {
    std::string result = fizzBuzz(6);
    ASSERT_EQ("Fizz", result);
}

TEST(fizzbuzz_tests, ReturnsBuzzWhen10PassedIn) {
    std::string result = fizzBuzz(10);
    ASSERT_EQ("Buzz", result);
}

TEST(fizzbuzz_tests, ReturnsFizzBuzzWhen15PassedIn) {
    std::string result = fizzBuzz(15);
    ASSERT_EQ("FizzBuzz", result);
}
