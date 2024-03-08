#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int rotate( vector<int>nums )
// {
//     cout << nums[4] << "\n" ;
//     cout << nums[5] << "\n" ;
//     cout << nums[6] << "\n" ;
//     cout << nums[7] << "\n" ;
//     cout << nums[0] << "\n" ;
//     cout << nums[1] << "\n" ;
//     cout << nums[2] << "\n" ;
//     cout << nums[3] << "\n" ;
//     return 0 ;
// }


int main()
{
  vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 };

  // Your Code Here
    
    // cout << rotate(nums) << "\n" ;
    
    rotate(nums.begin() , nums.begin() + 4 , nums.end()) ;

    for (int i : nums)
    {
        cout << i << "\n";
    }
  return 0;
}
// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4