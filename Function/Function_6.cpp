#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

// Write Your Function Here

string swapping(string name)
{
    string help_name = "" ;
    int count = size(name) ;
    for(int i = 0 ; i < count ; i++)
    {
        if(name[i] == 'h' || name[i] == 'H')
        {
            help_name += name[i] ;
        }
        else if(isupper(name[i]))
        {
            help_name += tolower(name[i]) ;
        }
        else
        {
            help_name += toupper(name[i]) ;
        }
    }
 return help_name ;
}



int main()
{
    cout << swapping("hero Of THe PROgramming") ; // hERO oF tHE proGRAMMING
    return 0 ;
}

// //__.__.__.__.__.__.__.__.__.__.__

// int main()
// {
//     string name = "hero Of THe PROgramming";
//     int count = size(name) ;
//     for(int i = 0 ; i < count ; i++)
//     { 
//     if(name[i] == 'h' || name[i] == 'H')
//     {
//         cout << name[i] ;
//     }
//     else if(isupper(name[i]))
//     {
//         cout << char(tolower(name[i])) ;
//     }
//     else if(islower(name[i]))
//     {
//         cout << char(toupper(name[i])) ;
//     }
//   // hERO oF tHE proGRAMMING
//     }
//   return 0;
// } 

// //__.__.__.__.__.__.__.__.__.__.__

// #include <iostream>
// using namespace std;

// // Write Your Function Here
// string swapping(string word) {
//     string newWord = "" ;
//     for (char letter : word ) {
//         if (letter == 'H' || letter == 'h' ) newWord += letter ;
//         else if ( letter == toupper(letter) ) newWord += tolower(letter) ;
//         else newWord += toupper(letter) ;
//     }
//     return newWord ;
// }

// int main()
// {
//     cout << swapping("hero Of THe PROgramming") << "\n"; //* hERO oF tHE proGRAMMING
//     return 0;
// }