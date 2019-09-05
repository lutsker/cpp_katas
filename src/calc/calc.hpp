#include <string>
#include <vector>
#include <map>

enum TokenType {Operator, Number, Delimiter, Unknown};
  
class Token {
public:
  std::string value;
  TokenType type;
};

std::string inline extend_with_eol(const std::string expression) {
  return expression + ";"; }

std::vector<int> extract_numbers(const std::string expression);

std::vector<Token> get_token(const std::string expression);

int calculate(const std::string expression);

int sum(const std::vector<int> numbers);

bool is_operator(const char symbol);

bool is_space(const char symbol);

bool is_digit(const char symbol);

bool is_delimiter(const char symbol);

bool is_empty_string(const std::string expression);


