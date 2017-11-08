#include <iostream>
int main()
{
  int n1;
  int n2;
  int s;
  int r;
  int m;
  int d;
  int re;

  std::cout << "Write first number:\n";
  std::cin >> n1;
  std::cout << "Write second number:\n";
  std::cin >> n2;
  s = n1 + n2;
  std::cout << "\nSum:"  << "\n" << s;
  r = n1 - n2;
  std::cout << "\nSubtract:" << "\n" << r;
  m = n1 * n2;
  std::cout << "\nProduct:" << "\n" << m;
  d = n1 / n2;
  std::cout << "\nDivision:" << "\n" << d;
  re = n1 % n2;
  std::cout << "\nResidue:" << "\n" << re;

  return 0;
}
//Era más sencillo de lo que creía
