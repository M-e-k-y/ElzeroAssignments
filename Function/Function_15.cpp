#include <iostream>
#include <array>
using namespace std ;

float avg(int money[] , int monsize)
{
    float help_money = 0 ;
    int day = monsize ;
    for (int i = 0 ; i < monsize ; i++)
    {
        help_money += money[i] ;        
    }
    
    return double(help_money / day) ;

}


int main()
{

    int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    
return 0 ;
}