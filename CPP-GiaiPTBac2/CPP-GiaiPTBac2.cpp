

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a , b, c, delta, x2,x1 ;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << " nhap c: ";
    cin >> c;
  
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "pt vo nghiem";

    }
    else if (delta == 0 )
    {
        x1 = x2= -b / (2 * a);
        cout << "pt co nghiem kep :"<<x1;
    }
    else if (delta > 0)
    
    {   x1 = -b +- sqrt(delta) / (2 * a);
        x2 = -b + -sqrt(delta) / (2 * a);
         cout << "pt co 2 nghiem"<< x1;

    }
    
    return 0;
}
