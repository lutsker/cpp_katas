#include <string>
#include <vector>
#include <map>

std::vector<int> extract_numbers(const std::string expression);

int calculate(const std::string expression);

int sum(const std::vector<int> numbers);

bool is_operator(const char symbol);

bool is_space(const char symbol);

bool is_digit(const char symbol);

bool is_delimiter(const char symbol);

std::string extend_with_eol(const std::string expression);

bool is_empty_string(const std::string expression);


