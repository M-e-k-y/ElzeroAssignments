#include <iostream>
#include <array>
using namespace std ;

int main()
{

array<int, 6> nums = {10, 20, 30, 40, 20, 50};
int NC = sizeof(nums) / sizeof(nums[0]) ;

//   // Method 1
//   "First: 10"
//   "Last: 50"
cout << "First: " << nums[0] << "\n" << "Last: " << nums[NC - 1] ;


//   // Method 2
//   "First: 10"
//   "Last: 50"

//   // Method 3
//   "First: 10"
//   "Last: 50"









return 0 ;
}