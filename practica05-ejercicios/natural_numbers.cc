/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file boolean_operators  
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date 31 October 2022
  * @brief This program calculates the division and the remainder of two
  *        natural numbers entered by the user. The sentences are put as
  *        comments so it can be corrected by jutge.org.
  * @bugs There are no known bugs
  */

#include <iostream>

int main() {
// std::cout << "This program calculates the division and the remainder of  two natural numbers << std::endl;
// std::cout << "Enter the dividend:" << std::endl;
int dividend;
std::cin >> dividend;
// std::cout << "Enter the divisor:" << std::endl;
int divisor;
std::cin >> divisor;
if (divisor > 0 && dividend > 0) {
  // std::cout << "The result of the division is: ";
  std::cout << dividend / divisor << std::endl;
  // std::cout << "The remainder of the division is: ";
  std::cout << dividend % divisor << std::endl;
}
else {
  return 1;
}
}
