#include <iostream>
#include <array>
using namespace std ;




void calcspecial(int num1 , int num2)
{
    cout << "Enter Two Numbers\n" ;
    cout << "__.__.__.__.__.__.__.__.__\n" ;
    cin >> num1 ;
    cin >> num2 ;
    if(num1 == num2)
    {
        cout << "The Two Numbers Is Equal";
        cout << "\n__.__.__.__.__.__.__.__.__\n" ;
        cout << "The Ruslt Is : " << num1 + num2 ;
    }
    else if(num1 > num2)
    {
        cout << "Number One Bigger" ;
        cout << "\n__.__.__.__.__.__.__.__.__\n" ;
        cout << num1 - num2 ;
    }
    else if(num1 < num2)
    {
        cout << "Number Two Bigger" ;
        cout << "\n__.__.__.__.__.__.__.__.__\n" ;
        cout << num2 - num1 ;
    }
}



int main()
{

calcspecial( 0 , 0 ) ;

return 0 ;
}