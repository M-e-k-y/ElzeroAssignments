#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();

  int index = ( ( *numbers.begin() - size(numbers) ) + ( *numbers.begin() - size(numbers) ) ) ;
//int index = (10-8) + (10-8) = 4 ----> Now I Have 50`s Address So I Can Do It :)  
  // Write Method One
    it = numbers.begin() + index ;
  
  // Write Method Two
    it = numbers.end() - index ;
  
  // Write Method Three
    advance(it , index ) ;

 
    
    
    cout << sizeof( numbers.begin()) << "\n" ;// 8 bit
    cout << *numbers.begin() << "\n" ;        //----> 10
    cout << sizeof( numbers.front()) << "\n" ;// 4 bit
    cout << numbers.front() << "\n" ;         //----> 10
  
  
  cout << *it << "\n"; // 50

  return 0;
}