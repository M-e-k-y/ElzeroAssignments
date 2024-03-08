#include <iostream>
#include <array>
using namespace std ;

int main()
{

int vals[]{100, 200, 750, 400, 200};

if(vals[0] + vals[4] > vals[2])
{
    cout << "First Number + Last Number Is Larger Than Middle Number\n" ;
    cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n" ;
    cout << vals[0] + vals[4] << " > " << vals[2] ;
}
else if (vals[1] + vals[3] > vals[2])
{
    cout << "Second Number + Before Last Number Is Larger Than Middle Number\n" ;
    cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << "\n" ;
    cout << vals[1] + vals[3] << " > " << vals[2] ;
}
else
{
    cout << "Middle Number Is The Largest\n" ;
    cout << vals[2] ;
}


// Example 1
// int vals[]{100, 200, 250, 400, 200};

// Needed Output
// "First Number + Last Number Is Larger Than Middle Number"
// "100 + 200 = 300"
// "300 > 250"

// Example 2
// int vals[]{100, 200, 500, 400, 200};

// Needed Output
// "Second Number + Before Last Number Is Larger Than Middle Number"
// "200 + 400 = 600"
// "600 > 500"

// Example 3
// int vals[]{100, 200, 600, 400, 200};

// Needed Output
// "Middle Number Is The Largest"
// "600"

return 0 ;
}