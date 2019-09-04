#include <string>
#include <vector>
#include <map>

std::vector<int> extract_numbers(const std::string expression);

int calculate(const std::string expression);

int sum(const std::vector<int> numbers);

bool is_operator(const char symbol);

bool is_space(const char symbol);

