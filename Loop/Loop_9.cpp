#include <iostream>
#include <array>
using namespace std ;

int main()
{
// Friends Array
 string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

// Output Needed
// "Mohamed"
// "Sayed"

for(int i = 1 ; i < 3 ; i++)
{
    cout << friends[i] << "\n" ;
}

int i = 1 ;
while (i < 3)
{
    cout << friends[i] << "\n" ;
    i++ ;
}





return 0 ;
}