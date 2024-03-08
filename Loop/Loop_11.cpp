#include <iostream>
#include <array>
using namespace std ;

int main()
{
string friends[] = {"Ahmed", "Osama", "Ameer"};


for ( int i = 0 ; i < size(friends) ; i++ )
{
    cout << "==========\n";
    cout << " = " << friends[i] << " = \n";
    cout << "==========\n";
 for(int o = 0 ; o < size(friends[i]) ; o++)
 {
    cout << friends[i][o] << ( o < size(friends[i]) - 1 ?  " , " : "" ) ;
 }
    cout << "\n====================\n";

}

return 0;
}