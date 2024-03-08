#include <iostream>
#include <array>
using namespace std ;

int main()
{

int vals[] = {100, 200, 200, 100};

int H = sizeof(vals) / sizeof(vals[0]) ;

if(vals[0] == vals[H-1] && vals[1] == vals[H-2])
{
    cout << "Array Is Palindrome\n" ;
}
else 
{
    cout << "Array Is Not Palindrome" ;
}






return 0 ;
}