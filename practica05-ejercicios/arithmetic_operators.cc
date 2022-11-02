/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file boolean_operators  
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date 31 October 2022
  * @brief This program shows the arithmetic operators and the comparison
  *        of two integers.
  * @bugs There are no known bugs
  */


#include <iostream>

int main() {
std::cout << "Enter the first integer:" << std::endl;
int number_1;
std::cin >> number_1;
std::cout << "Enter the second integer:" << std::endl;
int number_2;
std::cin >> number_2;
std::cout <<  "Arithmetic operations:" << std::endl;
std::cout << number_1 << " + " << number_2 << " = " << number_1 + number_2 << std::endl;
std::cout << number_1 << " - " << number_2 << " = " << number_1 - number_2 << std::endl;
std::cout << number_1 << " x " << number_2 << " = " << number_1 * number_2 << std::endl;
std::cout << number_1 << " / " << number_2 << " = " << number_1 / number_2 << std::endl;
std::cout << number_1 << " % " << number_2 << " = " << number_1 % number_2 << std::endl;
std::cout << "Comparison operations:" << std::endl;
if (number_1 > number_2) {
  std::cout << number_1 << " > " << number_2 << std::endl;
}
else {
  if (number_1 == number_2) {
    std::cout << number_1 << " = " << number_2 << std::endl;
  }
  else {
    std::cout << number_1 << " < " << number_2 << std::endl;
  }
}
}
