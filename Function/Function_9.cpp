#include <iostream>
#include <array>
using namespace std ;


int sumall(int numbers[] , int numssize , int noneed)
{
    int help_num = 0 ;
    for (int i = 0 ; i < numssize ; i++)
    {
        if(numbers[i] == noneed)
        {
            continue;
        }    
        help_num += numbers[i] ;
    }
    return help_num ;
}


int main()
{

int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";


return 0 ;
}