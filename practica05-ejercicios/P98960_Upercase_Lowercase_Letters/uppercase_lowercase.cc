/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file NOMBREDELPROGRAMA
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date FECHA
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  */


#include <iostream>

int main() {
  // std::cout << "Introduzca una letra para darle su mayuscula o minuscula relativa:" << std::endl;
  char letra;
  std::cin >> letra;
  if (letra >= 97) {
    char letra_mayuscula = letra - 32;
    std::cout << letra_mayuscula << std::endl;
  }
  else {
    char letra_minuscula = letra + 32;
    std::cout << letra_minuscula << std::endl;
  }
}
