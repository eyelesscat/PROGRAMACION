#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
  int n, c;
  int p, r;
  srand(time(NULL));
  n = 1 + rand() % (100);
  cout << "shhhh. secret is: " << n << endl;
do{
    cout << "I have a number chosen between 1 and 100. Please guess a number between 1 and 100:\n";
    cin >> p;
      if(p>n){
        cout << "I’m sorry but " <<p<< " is too high, try again." << endl;
      }
      if(p<n){
        cout << "I’m sorry but " <<p<< " is too low, try again." << endl;
      }
  } while(n != p);

  cout << "You got it! The right answer is indeed\n" << n;

  return 0;

}
