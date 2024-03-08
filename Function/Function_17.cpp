#include <iostream>
#include <array>
using namespace std ;

int pricing(int SellPhone , int AllUsedPhone , int NewPhonePrince , double Taxes)
{   
    int Profit = 0 ;
    int ReturnNewPhone = ( SellPhone - AllUsedPhone ) * NewPhonePrince ;
    int ReturnUsedPhone = AllUsedPhone * ( NewPhonePrince - 200 ) ;
    int Sales = ReturnNewPhone + ReturnUsedPhone ;
    int Tax = (Taxes/100) * Sales ;
    Profit = Sales - Tax ;
    return Profit ;
}

int main()
{

  cout << pricing(50, 10, 800, 20) << "\n"; // 30400

return 0 ;
}