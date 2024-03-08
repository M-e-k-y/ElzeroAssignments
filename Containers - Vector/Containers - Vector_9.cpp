#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  int helperone = 2;
  int helpertwo = 6;

  // Write Your Line Of Code Here

  for (int i : numbers)
    {
        if( i == *numbers.begin() )
            {
                cout << i << "\n";
            }
                if( i == numbers.at( ( (helpertwo/helperone) - helperone ) ) )
                {
                    cout << i << "\n" ;
                }
                    if( i == numbers.at( helpertwo ) )
                    {
                        cout << i << "\n" ;
                    }
                        else if ( i == *(numbers.end() -1 ) )
                        {
                            cout << i << "\n" ;
                        }
    }


    cout << "\n.__.__.__.___.__.\n\n" ;
  

    numbers.erase( numbers.begin() + helperone , numbers.begin() + helpertwo ) ;
  
    for(int i : numbers)
    {
        cout << i << "\n" ;
    }
  
  
  return 0;
}

// Needed Output
// 10 ---> 0
// 20 ---> 1
// 70 ---> 6
// 80 ---> 7