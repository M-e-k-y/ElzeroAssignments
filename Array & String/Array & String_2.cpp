#include <iostream>
#include <array>
using namespace std ;

int main()
{

int chek = 25 ;
int nums[] = {40, 20, 30, 70, 100} ;
int AC = sizeof(nums) / sizeof(nums[0]) ;
if( nums[0] > chek )
{
cout << "{" << nums[0] << "}" << " + " << "{" << nums[AC - 2] << "}" << " = " << nums[0] + nums[AC - 2] ;
}
else if ( nums[1] > chek )
{
cout << "{" << nums[1] << "}" << " + " << "{" << nums[AC - 2] << "}" << " = " << nums[1] + nums[AC - 2] ;
}
else if ( nums[2] > chek )
{
cout << "{" << nums[2] << "}" << " + " << "{" << nums[AC - 2] << "}" << " = " << nums[2] + nums[AC - 2] ;
}


// // Example 1
// int check = 25;
// int nums[]{40, 20, 30, 70, 100};

// // Ouput
// "{40} + {70} = 110"

// // Example 2

// int nums[]{20, 35, 30, 70, 100};

// // Ouput
// "{35} + {70} = 105"

// // Example 2

// int nums[]{20, 25, 30, 70, 100};

// // Ouput
// "{30} + {70} = 100"



return 0 ;
}