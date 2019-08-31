#include "fromroman.hpp"
#include <map>
#include <vector>

std::map<char, int> literal_map = {{'I', 1}, {'V', 5}, {'X', 10},
					  {'L', 50}, {'C', 100}, {'D', 500},
					  {'M', 1000}};

int from_roman(std::string roman_number) {

  std::vector<int> symbols;
  int result = 0;
  
  for (auto symbol: roman_number) {
    symbols.push_back(literal_map.at(symbol));
  }
  if (symbols.size() > 1) {
    for (int ii = 0; ii < symbols.size() - 1; ii++) {
      if (symbols[ii+1] - symbols[ii] > 0)
	symbols[ii] *= -1;
    }
  }
  for (auto symbol: symbols) {
    result += symbol;
  }
  return result;
}
