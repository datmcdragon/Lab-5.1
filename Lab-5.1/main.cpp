// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y);

int main()

 {
    
 double r, s;
    
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;
    
    double c = g(1,r)+g(pow(s,2)-1,pow(r,2))/g(s,1+r);
    
    cout << "c = " << c << endl;
    
 return 0;
    
 }
double g(const double x, const double y)
 {
return (x*x + y*y + sin(x*y)/1+abs(x*y));
 }
