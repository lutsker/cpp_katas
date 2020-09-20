#include "fromroman.hpp"
#include <map>
#include <vector>


int sum(const std::vector<int>& summands)
{
  int result = 0;
  for (auto summand: summands)
    result += summand;
  return result;
}


std::vector<int> map_roman_digits_to_their_values(std::string roman_number)
{
  std::map<char, int> literal_map = {
    {'I', 1},  {'V', 5}, {'X', 10},
	  {'L', 50}, {'C', 100}, {'D', 500},
	  {'M', 1000}
  };
  std::vector<int> symbols;
  
  for (auto symbol: roman_number)
    symbols.push_back(literal_map.at(symbol));
  return symbols;
}


void make_next_lower_rank_digit_negative(std::vector<int>& digits)
{
  if (digits.size() > 1) {
    for (int ii = 0; ii < digits.size() - 1; ii++) {
      if (digits[ii+1] - digits[ii] > 0)
      	digits[ii] *= -1;
    }
  }
}


int from_roman(std::string roman_number) 
{
  std::vector<int> digits = map_roman_digits_to_their_values(roman_number);
  make_next_lower_rank_digit_negative(digits);  
  return sum(digits);
}
