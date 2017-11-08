#include <iostream>
using std::endl;
using std::cout;
using std::cin;

  int sumar(int a, int b){
    int s;
    s = a + b;
    return s;
    }
  int restar(int a, int b){
    int r;
    r = a - b;
    return r;
    }
  int multiplicar(int a, int b){
    int m;
    m = a * b;
    return m;
    }

  int dividir(int a, int b){
    int d;
    d = a / b;
    return d;
    }

int residuo(int a, int b){
  int re;
  re = a % b;
  return re;
}

int main(){
  int a;
  int b;
  cout << "Give me the first number\n";
  cin >> a;
  cout << "Give me the second number\n";
  cin >> b;
  cout << "The sum is " << sumar(a,b) << endl;
  cout << "The subtract is " << restar(a,b) << endl;
  cout << "The product is " << multiplicar(a,b) << endl;
  cout << "The division is " << dividir(a,b) << endl;
  cout << "The residue is " << residuo(a,b) << endl;

  return 0;
}
