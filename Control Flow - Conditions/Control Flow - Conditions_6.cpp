 #include <iostream>
#include <array>
using namespace std ;

int main()
{

int age = 40;
int points = 100;

// if (sizeof(age) == 4)
//       cout << "Age Data Is 4 Bytes\n";
// if (age > 18)
//   cout << "Age Is Ok\n";
//   if (points > 50)
//     cout << "Points Is Ok\n";
    
    if( sizeof(age) == 4 && age > 18 && points > 50 )
    {
        cout << "Age Data Is 4 Bytes\nAge Is Ok\nPoints Is Ok\n" ;
    }

// Output Needed
// "Age Data Is 4 Bytes"
// "Age Is Ok"
// "Points Is Ok"









return 0 ;
}