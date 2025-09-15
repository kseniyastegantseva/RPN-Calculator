#pragma once
#include <stack>
#include <iostream>
#include <string>

/**
 * @brief Evaluates a mathematical expression in Reverse Polish Notation (RPN).
 *
 * @param expression A string containing the RPN expression (e.g., "2 3 +").
 * Tokens must be separated by spaces.
 * @return stack The result of the evaluated expression.
 * @exception std::invalid_argument Thrown if the expression is invalid,
 * contains an unknown operator, or attempts division by zero.
 */

double valuate_rpn(const std::string &expression);
