#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std ;

int main()
{

    vector<int> nums = {100 , 200 , 300 , 400} ;
    vector<int>::iterator last = nums.end() ;

    for(int c : nums)
    {
        cout << c << "\n" ;
    }
    nums.push_back(500) ;

cout << ".__.__.__.\n" ;

    cout << "First Element Is : " << *nums.begin() << "\n" ;            // 100
    cout << "Last Element Is : " << nums.at(nums.size() -1) << "\n" ;   // 500   <----
    cout << "Last Element Is : " << *nums.end() ;                       // Eror  <----









return 0 ;
}