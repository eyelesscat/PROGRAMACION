#include <iostream>
using namespace std;

int suma(int max, int min);

int main(){
    cout << "Piensa en dos números... Haremos la suma de los números dentro del rango de los que nos darás: \n";
    int x, y;
    cout << "Danos el número más bajo: \n";
    cin >> x;
    cout << "Danos el número más alto: \n";
    cin >> y;

    if (x<y){
      cout << "La suma de " << x << " to " << y << " is: " << suma (x, y) endl;
    }
    else if (x>y){
      cout << "La suma de " << x << " to " << y << " is: " << suma (y, x) endl;
    }
  return 0;
}

int suma (int face, int ass){
    int suma=0;
    for (int i = face ; i <= ass; i++){
      suma +=i;
    }
  return suma;
}
