/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date Oct 2 2022
  * @brief El programa imprime el máximo de tres números enteros. 
  * @bug No hay bugs conocidos.
  */


#include <iostream>

int main() {
  int primer_entero;
  std::cin >> primer_entero;
  int segundo_entero;
  std::cin >> segundo_entero;
  int tercer_entero;
  std::cin >> tercer_entero;
  if (primer_entero > segundo_entero && primer_entero > tercer_entero) {
    std::cout << primer_entero << std::endl;
  }
  else {
    if (segundo_entero > tercer_entero) {
      std::cout << segundo_entero << std::endl;
    }
    else {
      std::cout << tercer_entero << std::endl;
    }
  }
}
