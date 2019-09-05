#include <catch2/catch.hpp>
#include <calc.hpp>
#include <vector>


TEST_CASE( "returns 5 for string 2 + 3", "[calculate]") {
  REQUIRE(calculate("2 + 3") == 5);
}

TEST_CASE( "returns 5 for string '  2 + 3 '", "[calculate]") {
  REQUIRE(calculate("  2 + 3 ") == 5);
}

TEST_CASE( "returns 1 for string 0 +1", "[calculate]") {
  REQUIRE(calculate("0 +1") == 1);
}

TEST_CASE( "returns 101 for string 99+2", "[calculate]") {
  REQUIRE(calculate("99+2") == 101);
}

TEST_CASE( "returns 101 for string 99 +2", "[calculate]") {
  REQUIRE(calculate("99 +2") == 101);
}

TEST_CASE( "returns (1,1) if string is 1+1", "[extract_numbers]") {
  std::vector<int> test_data = {1,1};
  REQUIRE(extract_numbers("1+1") == test_data);
}

TEST_CASE( "returns (1,2) if string is 1+ 2", "[extract_numbers]") {
  std::vector<int> test_data = {1,2};
  REQUIRE(extract_numbers("1+ 2") == test_data);
}

TEST_CASE( "returns (2,3) if string is 2 + 3", "[extract_numbers]") {
  std::vector<int> test_data = {2,3};
  REQUIRE(extract_numbers("2 + 3") == test_data);
}

TEST_CASE( "returns (99,2) if string is 99 +2", "[extract_numbers]") {
  std::vector<int> test_data = {99,2};
  REQUIRE(extract_numbers("99 +2") == test_data);
}

TEST_CASE( "returns (99,2,101) if string is 99 +2 +  101 ",
	   "[extract_numbers]") {
  std::vector<int> test_data = {99,2,101};
  REQUIRE(extract_numbers("99 +2 +  101 ") == test_data);
}

TEST_CASE( "returns 3 if argument is {1,1,1}", "[sum]" ) {
  std::vector<int> test_data = {1,1,1};
  REQUIRE(sum(test_data) == 3);
}

TEST_CASE( "returns 4 if argument is {1,1,1,1}", "[sum]" ) {
  std::vector<int> test_data = {1,1,1,1};
  REQUIRE(sum(test_data) == 4);
}

TEST_CASE( "returns 105 if argument is {1,2,1,101}", "[sum]" ) {
  std::vector<int> test_data = {1,2,1,101};
  REQUIRE(sum(test_data) == 105);
}

TEST_CASE( "returns true if symbol is '+'", "[is_opertor]") {
  REQUIRE(is_operator('+') == true);
}

TEST_CASE( "returns true if symbol is ';'", "[is_opertor]") {
  REQUIRE(is_operator(';') == true);
}

TEST_CASE( "returns false if symbol is ' '", "[is_opertor]") {
  REQUIRE(is_operator(' ') == false);
}

TEST_CASE( "returns true if symbol is ' '", "[is_space]") {
  REQUIRE(is_space(' ') == true);
}

TEST_CASE( "returns false if symbol is '+'", "[is_space]") {
  REQUIRE(is_space('+') == false);
}

TEST_CASE( "returns false if symbol is '-'", "[is_digit]") {
  REQUIRE(is_digit('-') == false);
}

TEST_CASE( "returns true if symbol is digit", "[is_digit]") {
  std::vector<char> digits = {'0', '1', '2', '3', '4', '5',
			      '6', '7', '8', '9'};
  for (auto digit: digits)
    REQUIRE(is_digit(digit) == true);
}

TEST_CASE( "returns true if symbol is space", "[is_delimiter]") {
  REQUIRE(is_delimiter(' ') == true);
}

TEST_CASE( "returns false if symbol is +", "[is_delimiter]") {
  REQUIRE(is_delimiter('+') == false);
}

TEST_CASE( "returns 'hello;' if argument is 'hello'", "[extend_with_eol]") {
  REQUIRE(extend_with_eol("hello") == "hello;");
}

TEST_CASE( "returns true if argument is empty string", "[is_empty_string]") {
  const std::string empty_string = ""; 
  REQUIRE(is_empty_string(empty_string) == true);
}

TEST_CASE( "returns false if argument is not empty string", "[is_empty_string]") {
  const std::string not_empty_string = "?"; 
  REQUIRE(is_empty_string(not_empty_string) == false);
}
