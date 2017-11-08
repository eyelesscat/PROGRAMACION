#include <iostream>
int main()
{
  int n0;
  int c;

  std::cout << "¡Let's convert Fahrenheit degrees to Celsius!";
  std::cout << "Write the fahrenheit degrees you want to convert to celsius:\n";
  std::cin >> n0;
  c = 5*(n0 - 32)/9;
  std::cout << "\n" << n0 << "\nFahrenheit degrees are" << "\n" << c;
  std::cout << "\nCelsius degrees." << "\n";


  return 0;
}
