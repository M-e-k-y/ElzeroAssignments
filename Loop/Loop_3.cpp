#include <iostream>
#include <array>
using namespace std ;

int main()
{
cout << "enter two numbers\n" ;
int x , y ;
cin >> x >> y ;

if(x < y)
{
    for(int i = x+1 ; i < y ; i++)
    {
        if(i % 2 != 0)
        {
            cout << "{ " << i << " }" ;
        }
    }
}
else if(x > y)
{
    for(int i = y+1 ; i < x ; i++)
    {
         if(i % 2 != 0)
         {
            cout << "{ " << i << " }" ;
         }
    }
}






return 0 ;
}