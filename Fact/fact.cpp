#include <iostream>
#include <math.h>
using std::endl;
using std::cout;
using std::cin;

int main(){
  int fact=1;
  int o;
  int n;

  cout << "~type n~" << endl;
  cin >> n;
  for(o=1; o<=n; c++){
    fact=fact*o;
  }

  if (n==0 or n==1){
    fact=1;
  }
  cout <<" the f of " <<n<<"is "<<fact;

  return 0;
}
