#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers ;

  vector<float> floats(100) ;
  
  // Fill Integers Here
    for(int i = 0 ; i < 101 ; i++)
    {
        numbers.push_back(1000) ;
    }
  
    // fill(numbers.begin() , numbers.end() , 1000) ;

//=======================//  

  // Fill Floats Here

    // for(int v = 0 ; v < 101 ; v++)
    // {
    //     floats.push_back(100.5) ;
    // }

    fill(floats.begin() , floats.end() , 100.5) ;



  cout << numbers.at(0) << "\n"; // 1000
  cout << numbers.at(99) << "\n"; // 1000

  cout << floats.at(0) << "\n"; // 100.50
  cout << floats.at(99) << "\n"; // 100.50
  return 0;
}