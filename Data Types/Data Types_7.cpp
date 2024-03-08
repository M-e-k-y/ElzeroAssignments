#include <iostream>
#include <array>
using namespace std ;

int main()
{


int a = 1;
int b = 13;
int c = 17;
int d = 70;

// Output Needed
// "EWS"

// E => 69 = 70 - 1 => d - a
// W => 87 = 17 + 70 => c + d
// S => 83 = 13 + 70 => b + d

cout << char( d - a ) ;
cout << char( c + d ) ;
cout << char( b + d ) ;






return 0 ;
}