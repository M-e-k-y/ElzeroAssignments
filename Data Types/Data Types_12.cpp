#include <iostream>
#include <array>
using namespace std ;

int main()
{


// Do Not Edit Here
short a = 1000;                     // 2  sizeof(a)
int b = 10000;                      // 4  sizeof(b)
long double c = 5.560000505012;     // 16 sizeof(c)

// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(b) + sizeof(c) << "\n"; // 20
cout << sizeof(a) * sizeof(c) << "\n"; // 32
cout << a * int(c) << "\n"; // 5000
cout << char( int(c) * sizeof(c) ) << "\n"; // P








return 0 ;
}