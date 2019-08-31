#include "fizzbuzz.hpp"

bool is_multiple_of(int multiplier, int number) {
  if(number % multiplier == 0) return true;
  else return false;
}

std::string translate_number_to_fizzbuzz(int number) {
  if (is_multiple_of(3, number) && !is_multiple_of(5, number))
    return "Fizz";
  else if (is_multiple_of(5, number) && !is_multiple_of(3, number))
    return "Buzz";
  else if(is_multiple_of(3, number) && is_multiple_of(5, number))
    return "FizzBuzz";
  else
    return std::to_string(number);
}
