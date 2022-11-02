/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file boolean_operators  
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date 2 November 2022
  * @brief This program shows the truth table with the operators and/or/not
  *        and the possible combinations of the variables (p,q) with
  *        different values (0 or 1).
  * @bugs There are no known bugs
  */


#include <iostream>

int main() {
std::cout << "The truth table (and, or, not):" << std::endl;
std::cout << std::endl;
int p_boolean_variable;
int q_boolean_variable;
std::cout << "p " << "q " << "and " << "or " << "(not)p ";
std::cout << "(not)q" << std::endl;
// First row of the table:
p_boolean_variable = 0; // 1=true , 0=false.
q_boolean_variable = 0;
bool and_operator;
and_operator = p_boolean_variable + q_boolean_variable == 2;
bool or_operator;
or_operator = p_boolean_variable + q_boolean_variable >= 1;
std::cout << "0 " << "0 " << " " << and_operator << "   " << or_operator;
if (p_boolean_variable == 1) {
  int not_p{0};
  std::cout << "    " << not_p << "     ";
}
else {
  int not_p{1};
  std::cout << "    " << not_p << "     ";
}
if (q_boolean_variable == 1) {
  int not_q{0};
  std::cout << not_q << std::endl;
}
else {
  int not_q{1};
  std::cout << not_q << std::endl;
}
// Second row:
p_boolean_variable = 1;
q_boolean_variable = 0;
and_operator = p_boolean_variable + q_boolean_variable == 2;
or_operator = p_boolean_variable + q_boolean_variable >= 1;
std::cout << "1 " << "0 " << " " << and_operator << "   " << or_operator;
if (p_boolean_variable == 1) {
  int not_p{0};
  std::cout << "    " << not_p << "     ";
}
else {
  int not_p{1};
  std::cout << "    " << not_p << "     ";
}
if (q_boolean_variable == 1) {
  int not_q{0};
  std::cout << not_q << std::endl;
}
else {
  int not_q{1};
std::cout << not_q << std::endl;
}
// Third row:
p_boolean_variable = 0;
q_boolean_variable = 1;
and_operator = p_boolean_variable + q_boolean_variable == 2;
or_operator = p_boolean_variable + q_boolean_variable >= 1;
std::cout << "0 " << "1 " << " " << and_operator << "   " << or_operator;
if (p_boolean_variable == 1) {
  int not_p{0};
  std::cout << "    " << not_p << "     ";
}
else {
  int not_p{1};
  std::cout << "    " << not_p << "     ";
}
if (q_boolean_variable == 1) {
  int not_q{0};
  std::cout << not_q << std::endl;
}
else {
  int not_q{1};
  std::cout << not_q << std::endl;
}
// Fourth row:
p_boolean_variable = 1;
q_boolean_variable = 1;
and_operator = p_boolean_variable + q_boolean_variable == 2;
or_operator = p_boolean_variable + q_boolean_variable >= 1;
std::cout << "1 " << "1 " << " " << and_operator << "   " << or_operator;
if (p_boolean_variable == 1) {
  int not_p{0};
  std::cout << "    " << not_p << "     ";
}
else {
  int not_p{1};
  std::cout << "    " << not_p << "     ";
}
if (q_boolean_variable == 1) {
  int not_q{0};
  std::cout << not_q << std::endl;
}
else {
  int not_q{1};
  std::cout << not_q << std::endl;
}
}
