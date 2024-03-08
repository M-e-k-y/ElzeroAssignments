#include <iostream>
#include <array>
using namespace std ;

int plusandmultiply(int numbers[] , int numssize)
{
int EvenNum = 0 ;
int OddNum = 1 ;
for (int i = 0 ; i < numssize ; i++)
{

if (numbers[i] % 2 == 0)
{
    EvenNum += numbers[i] ;
}
else if (numbers[i] % 2 != 0)
{
   OddNum *= numbers[i] ;
}

}
cout <<"Even Numbers Is : " << EvenNum << "\n" ;
cout << "Odd Numbers Is : " << OddNum << "\n";
cout << "The Ruselt Is : " ;
return EvenNum + OddNum ;
}


int main()
{

int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
int numssize = size(numbers);
cout << plusandmultiply(numbers, numssize) << "\n";
// Even Numbers -> 10 + 20 + 30 + 40 = 100
// Odd Numbers  -> 3 * 5 * 7 = 105
// Total = 100 + 105 = 205



return 0 ;
}