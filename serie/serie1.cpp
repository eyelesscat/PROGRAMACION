#include <iostream>
using std::cout;
using std::endl;
using std::cin;
                          //Hagan sus tareas a tiempo :(
int main(){
    int sum = 0;
    int a;
    int b;

    cout << "Choose two numbers...\n";
    cout << "Give me de lowest number: ";
    cin >> a;
    cout << "Give me de upper number: ";
    cin >> b;

    for (int number = a;
             number <= b;
             number += a)
      sum += number;
    cout << "The sum es: " << sum << endl;

    return 0;
}
