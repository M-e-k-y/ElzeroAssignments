#include <iostream>
#include <array>
using namespace std ;


int firstnegative(int numbers[] , int numssize)
{
    int nig_num = 0 ; 
    for (int i = 0 ; i < numssize ; i++)
    {
        if (numbers[i] < 0)
        {
            nig_num = numbers[i] ;
        }
    }

    int big_num = nig_num ;
    for (int o = 0 ; o < numssize ; o++)
    {
        if(numbers[o] < 0 && numbers[o] > nig_num)
        {
            big_num = numbers[o] ;
        }
    }
    
    return big_num ;
}


int main()
{

int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
int numssize = size(numbers);
cout << firstnegative(numbers, numssize) << "\n";
  
return 0 ;
}