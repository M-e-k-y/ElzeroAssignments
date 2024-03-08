#include <iostream>
#include <array>
using namespace std ;

void money(float salary , int days)
{
    cout << "enter your salary and work days" ;
    cout << "\n__.__.__.__.__.__.__.__.__.__\n" ;
    cin >> salary ;
    cin >> days ;
    int holidays = ( days / 7 ) * 1 ;
    days = days - holidays ;
    cout << "your salarly per day is : " << salary / days ;
}




int main()
{


money( 0 , 0 ) ;

return 0 ;
}