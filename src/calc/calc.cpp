#include "calc.hpp"
#include <iostream>

std::map<char, int> symbol_map = {{'1', 1}, {'2', 2}, {'3', 3}, {'9', 9},
				  {'0', 0}};

bool is_operator(const char symbol) {
  if (symbol == '+')
    return true;
  else
    return false;
}

bool is_space(const char symbol) {
  if (symbol == ' ')
    return true;
  else
    return false;
}

std::vector<int> extract_numbers(const std::string expression) {
  std::vector<int> result;
  std::string current_token = "";
  for (auto symbol: expression) {
    if (!is_operator(symbol) and
	!is_space(symbol)) {
      current_token += std::to_string(symbol_map.at(symbol));
    }
    else {
      if (current_token != "") 
	result.push_back(std::stoi(current_token));
      current_token = "";
    }
  }
  if (current_token != "") 
    result.push_back(std::stoi(current_token));
  return result;
}

int inline sum(const std::vector<int> numbers) {
  int result = 0;
  for (auto number: numbers)
    result += number;
  return result;
}

int calculate(const std::string expression) {
  return sum(extract_numbers(expression));
}
