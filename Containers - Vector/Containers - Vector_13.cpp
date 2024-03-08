// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <array>
// using namespace std;

// // Write Your Function Here

// int add(vector<int> nums)
// {
//     int add = 0 ;

//     for (int i : nums)
//     {
//         add += i ;
//     }
    
//     return add ;
    
// }



// int main()
// {
//   vector<int> numbersone = { 10, 20, 30 };
//   vector<int> numberstwo = { 5, 15, 25 };

// cout << add(numbersone) << "\n"; // 60
// cout << add(numberstwo) << "\n"; // 45

//   return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
  vector<int> nums = {10 , 22 , 34 , 54 , 43 , 90} ;

  cout << *(nums.crend() - 1) << "\n" ;
  cout << *nums.begin() << "\n" ; 

  return 0;
}
