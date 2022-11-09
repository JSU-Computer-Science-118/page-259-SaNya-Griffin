// Sa'Nya Griffin J00964290 November 9
#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int b,a,c;
  const double discriminant= pow(b,2)-4*a*c;

  cout << "Enter a value:";
  cin >> a;
  cout << endl;

  cout << "enter b value:";
  cin >> b;
  cout << endl;  

  cout << "Enter c value:";
  cin >> c;
  cout << endl;
cout << "Discriminant is:" << discriminant << endl;

  if (discriminant> 0) 
  {cout << "The equation has two real roots"<< endl;
    }
  if (discriminant < 0) 
  {cout << "the equation has two complex roots"<< endl;}

  if (discriminant == 0 )
  {cout << "the equation has a single root"<< endl;}

  return 0;
  
  
}
