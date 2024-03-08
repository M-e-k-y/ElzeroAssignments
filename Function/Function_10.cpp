#include <iostream>
#include <array>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std ;


int minpositive(int numbers[] , int numssize)
{
    int pos_num = 0 ; 
    for(int i = 0 ; i < numssize ; i++)
    {
        if(numbers[i] > 0)
        {
            pos_num = numbers[i] ;
        }
    }


    int min_num = pos_num ;
    for (int o = 0 ; o < numssize; o++)
    {
        if (numbers[o] > 0 && numbers[o] < min_num)
        {
            min_num = numbers[o] ;
        }
        
    }
    
    return min_num ;

}




int main()
{

  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";

return 0 ;
}