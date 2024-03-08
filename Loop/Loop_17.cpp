#include <iostream>
#include <array>
using namespace std ;

int main()
{
for(int i = 1 ; i < 103 ; i++)
{
    if( i >= 1 && i < 10 )
    {
        cout << "00" << i << "\n" ;
    }
        else if( i > 9 && i < 100 ) 
        {
            cout << "0" << i << "\n";
        }
            else 
                {
                    cout << i << "\n";
                }
            
}




return 0 ;
}