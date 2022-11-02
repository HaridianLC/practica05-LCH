/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file NOMBREDELPROGRAMA
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date Oct 2 2022
  * @brief This program tells if a letter is a uppercase, lowercase, vowel
  *        or consonant. 
  * @bug There are no known bugs
  */


#include <iostream>

int main() {
  char letter;
  std::cin >> letter;
  if (letter >= 97) {
    std::cout << "lowercase" << std::endl;
    if ((letter == 97) || (letter == 101) || (letter == 105) || (letter == 111) || (letter == 117)) {
      std::cout << "vowel" << std::endl;
    }
    else {
      std::cout << "consonant" << std::endl;
    }
  }
  else {
    std::cout << "uppercase" << std::endl;
     if ((letter == 65) || (letter == 69) || (letter == 73) || (letter == 79) || (letter == 85)) {
       std::cout << "vowel" << std::endl;
     }
     else {
       std::cout << "consonant" << std::endl;
     }
  }
 }
