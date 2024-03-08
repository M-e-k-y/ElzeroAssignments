#include <iostream>
#include <array>
using namespace std ;

int books(int min, int mid , int big , int shelf)
{
    int free = shelf * 20 ;
    int books_space = ((min*2) + (mid*4) + (big*6)) ;
    if(books_space > free)
    {
        return 0 ;
    }
    else
    {
        return free - books_space ;
    } 
}


int main()
{




  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  






return 0 ;
}