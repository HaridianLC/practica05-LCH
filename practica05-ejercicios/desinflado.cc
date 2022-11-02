/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file boolean_operators  
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date 31 October 2022
  * @brief This program shows the lowercase letter of the uppercase
  *        entered by the user.
  * @bugs There are no known bugs
  */

#include <iostream>

int main() {
std::cout<< "Enter an uppercase for its lowercase:" << std::endl;
char uppercase;
std::cin >> uppercase;
char lowercase = uppercase + 32;
std::cout << lowercase << std::endl;
}
