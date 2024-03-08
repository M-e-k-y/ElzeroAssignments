#include <iostream>
#include <array>
using namespace std ;

int main()
{
cout << " choose a number between 0 and 150 😊 \n" ;
cout << "************************************* \n" ;
int num ; 
cin >> num ;

if( num < 10 )
{
    cout << "00" << num ;
}
if( num > 10 && num < 100 )
{
    cout << "0" << num ;
}
if( num >= 100 )
{
    cout << num ; 
}








return 0 ;
}