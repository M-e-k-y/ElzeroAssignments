#include <iostream>
#include <array>
using namespace std ;

int main()
{

int index = 10;
int jump = 2;

for (;;)
{
    if(index > 3)
    {
    cout << index << "\n" ;
    index -= jump ;
    }
}

// Output Needed
// 10
// 8
// 6
// 4









return 0 ;
}