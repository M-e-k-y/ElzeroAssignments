#include <iostream>
#include <array>
using namespace std ;

int main()
{


int nums[] = {10, 20, 30, 40, 20, 50};
int numsCount = sizeof(nums) / sizeof(nums[0]) ;

// Method 1
// 6
cout << end(nums) - begin(nums) << "\n";

// Method 2
// 6
cout << numsCount << "\n";

// Method 3
// 6
cout << size(nums) ;







return 0 ;
}