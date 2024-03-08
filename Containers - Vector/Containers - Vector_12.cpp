#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40 };

  // Method One
    int n = 1 ;
    if(numbers.size() > n)
    {
        numbers.resize(numbers.size() - n) ;
    }
    
cout << ".__.__.__.\n" ;
 
  // Method Two
      numbers.erase(numbers.end() - 1 ) ;
  
cout << ".__.__.__.\n" ;

  // Method Three
    numbers.pop_back() ;  

for(int i : numbers)
    {
        cout << i << "\n" ;
    }
  return 0;
}