// Default Parameter Value
#include<bits\stdc++.h>
using namespace std;
// Default Parameter Shuld be at last position
void myFunction(int n,string country = "Norway",int c=45) {
  cout << country<<" "<<n <<" "<<c<< "\n";
}

int main() {
  myFunction(567,"Sweden");
  myFunction(45);
  //myFunction(34,567);   //Error
  return 0;
}
// A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "Norway" is the default value.

// Sweden 567 45
// Norway 45 45
