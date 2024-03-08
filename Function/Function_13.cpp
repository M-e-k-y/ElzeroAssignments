#include <iostream>
#include <array>
using namespace std ;

string greeting(string name , string gender ="Hello")
{
    string msg = "Hello " ;
    string male = "Mr " ;
    string female = "Miss " ;
    string HelpName = " " ;

    if(gender == "Male")
    {
        HelpName = msg + male + name + "\n" ; 
    }
    else if(gender == "Female")
    {
        HelpName = msg + female + name + "\n" ;
    }
    else
    {
        HelpName = msg + name + "\n" ;
    }

    return HelpName ;
}


int main()
{

cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
cout << greeting("Sameh" ) << "\n"; // Hello Sameh

return 0 ;
}