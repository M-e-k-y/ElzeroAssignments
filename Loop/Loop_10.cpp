#include <iostream>
#include <array>
using namespace std ;

int main()
{

// Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"

// for(int i = 0 ; i < 5 ; i++)
// {
//     if(friends[i] == friends[2] || friends[i] == friends[1])
//     {
//     continue;
//     }
//     cout << friends[i] << "\n" ;
// }


int i = 0 ;
while (i < 5)
{
    if(friends[i] == friends[2] || friends[i] == friends[1])
    {
    continue;
    }
    cout << friends[i] << "\n" ;
    i++ ;
}







return 0 ;
}