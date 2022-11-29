#include <iostream>
#include <string>

int main() {
  float pesos = 0.00;
  float reais = 0.00;
  float soles = 0.00;
  float dollars = 0.00;

  // from Pesos to USD
  float pesos_rate = 0.00021;
  // from Reais to USD
  float reais_rate = 0.19;
  // from Soles to USD
  float soles_rate = 0.26;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  std::cout << pesos << std::endl;
  std::cout << reais << std::endl;
  std::cout << soles << std::endl;

  dollars = pesos * pesos_rate + reais * reais_rate + soles * soles_rate;

  std::cout << "US Dollars = $" << dollars << std::endl;
  return 0;
}
