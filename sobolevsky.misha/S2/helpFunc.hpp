#ifndef HELPFUNC_HPP
#define HELPFUNC_HPP
#include <iostream>
#include <string>
#include <memory>
#include "stack.hpp"

namespace sobolevsky
{
  void fillStack(std::istream & in, Stack< std::string > & expressions);
  bool isDigit(std::string c);
  int algebrChars(std::string c);
  size_t counter(std::string ch, size_t first, size_t second);
  std::shared_ptr< std::string[] > fromInfixToPostfix(std::string infixExpression, size_t &i);
  size_t countPostfix(std::shared_ptr< std::string[] > postfix, size_t length);
}

#endif
