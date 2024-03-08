#include <iostream>
#include <array>
using namespace std ;

int main()
{


int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;

// Output Needed
// "Character Of This ASCII Value 69 Is E"
// "Character Of This ASCII Value 108 Is l"
// "Character Of This ASCII Value 122 Is z"
// "Character Of This ASCII Value 101 Is e"
// "Character Of This ASCII Value 114 Is r"
// "Character Of This ASCII Value 111 Is o"

// Output Needed In Last Line
// "Elzero"

cout << "Character Of This ASCII Value " << a << " IS " << char(a) << "\n" ; 
cout << "Character Of This ASCII Value " << b << " IS " << char(b) << "\n" ; 
cout << "Character Of This ASCII Value " << c << " IS " << char(c) << "\n" ; 
cout << "Character Of This ASCII Value " << d << " IS " << char(d) << "\n" ; 
cout << "Character Of This ASCII Value " << e << " IS " << char(e) << "\n" ; 
cout << "Character Of This ASCII Value " << f << " IS " << char(f) << "\n" ; 
cout << "==============\n" ;
cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) ;





return 0 ;
}