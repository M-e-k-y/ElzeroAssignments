#include <iostream>
#include <array>
using namespace std ;

int main()
{
for(int i = 30 ; i > 1 ; i -= 3)
{
    if(i % 2 != 0 )
    cout << i << "\n" ;
}

return 0 ;
}