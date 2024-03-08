#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 5, 4, 3, 2, 1 };

  vector<int>::iterator first = nums.begin() ;
  vector<int>::iterator last = nums.end() - 1 ;

  // Method One
    // sort(nums.begin() , nums.end()) ;
  
  // Method Two
    // for(auto r = nums.rbegin() ; r != nums.rend() ; ++r)
    // {
    //     cout << *r << "\n" ;
    // }

  // Method Three -> Use Swap + Loop For Challenge
   
  for (int i : nums)
  {
    void swap(*last , *first) ;

    cout << i << "\n";
  }

  return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5