#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> firstnums = { 10, 30, 50, 70 };
  vector<int> secondnums = { 20, 40, 60, 80 };
  int size = ( firstnums.size() + secondnums.size() ) ;
  vector<int> allnums(size) ;

  merge(firstnums.begin() ,firstnums.end() , secondnums.begin() , secondnums.end() , allnums.begin()) ;
  
//   sort(allnums.begin() , allnums.end()) ;

  for(int i : allnums)
  {
    cout << i << "\n" ;
  }

  return 0;
}

// Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80