#include <iostream>
using namespace std;

int main() {
  long int a, b, x, y;
  int  t, gcd, lcm,T;

  cin >> T ;
  for (int i = 0; i <=3 ; i++)
  {
      /* code */
  
  
  cin>> x >> y ;

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  cout<< gcd<<" " << lcm ;
  }
 

  return 0;
}