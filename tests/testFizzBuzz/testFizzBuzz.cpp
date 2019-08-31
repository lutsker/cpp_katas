#include <catch2/catch.hpp>
#include <fizzbuzz.hpp>

TEST_CASE( "true if argument is a multiple of 3", "[is_multiple_of]") {

  for (int test_number = 1; test_number <= 34; test_number++) {
    REQUIRE(is_multiple_of(3, test_number * 3) == true);
  }
}

TEST_CASE( "true if argument is a multiple of 5", "[is_multiple_of]") {

  for (int test_number = 1; test_number <= 20; test_number++) {
    REQUIRE(is_multiple_of(5, test_number * 5) == true);
  }
}

TEST_CASE( "false if argument is not a multiple of 3", "[is_multiple_of]") {

  std::vector<int> test_data = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16,
				17, 19, 20, 22, 23, 25, 26, 28, 29};
  
  for (auto test_number: test_data) {
    REQUIRE(is_multiple_of(3, test_number) == false);
  }
}

TEST_CASE( "false if argument is not a multiple of 5", "[is_multiple_of]") {

  std::vector<int> test_data = {1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 13, 14, 16,
				17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31};
  
  for (auto test_number: test_data) {
    REQUIRE(is_multiple_of(5, test_number) == false);
  }
}

TEST_CASE( "returns Fizz, if argument is a multiple of 3, \
but not a multiple of 5", "[translate_number_to_fizzbuzz]") {

  std::vector<int> test_data = {1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 13, 14, 16, 17};

  for (auto test_number: test_data) {
    REQUIRE(translate_number_to_fizzbuzz(test_number * 3) == "Fizz");
  }
}

TEST_CASE( "returns Buzz, if argument is a multiple of 5, \
but not a multiple of 3", "[translate_number_to_fizzbuzz]") {

  std::vector<int> test_data = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17};

  for (auto test_number: test_data) {
    REQUIRE(translate_number_to_fizzbuzz(test_number * 5) == "Buzz");
  }
}

TEST_CASE( "returns FizzBuzz, if argument is a multiple of 5 and of 3",
	   "[translate_number_to_fizzbuzz]") {

  std::vector<int> test_data = {15, 30, 45, 60, 75};

  for (auto test_number: test_data) {
    REQUIRE(translate_number_to_fizzbuzz(test_number) == "FizzBuzz");
  }
}

TEST_CASE( "returns the number if not fizzbuzz, fizz or buzz",
	   "[translate_number_to_fizzbuzz]") {
  std::vector<int> test_data = {1, 2, 4, 7, 8, 11, 13, 14, 16, 17};

  for (auto test_number: test_data) {
    REQUIRE(translate_number_to_fizzbuzz(test_number)
	    == std::to_string(test_number));
  }
}
