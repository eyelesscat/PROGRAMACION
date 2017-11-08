#include <iostream>

using namespace std;

int main(){

    int n1;
    int n2;
    int p;
    int i;
    int r;

    cout << "Let's do MATH!";
    cout << "Give me the first number\n";
    cin >> n1;
    cout << "Give me the second number\n";
    cin >> n2;
    p = n1 * n2;
    cout << "The product is: " << "\n" << p;
    i = n1 / n2;
    cout << "The integer division is: " << "\n" << i;
    r = n1 % n2;
    cout << "The remainder from division is: " << "\n" << r;

    return 0;
}
