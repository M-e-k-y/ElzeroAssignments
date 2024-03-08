#include <iostream>
#include <array>
using namespace std ;

string createurl(string protocol , string name , string domain , bool check = "WWW")
{
   if (check == true)
   {
    return protocol + "WWW." + name + domain ;
   }
   else
   {
    return protocol + name + domain ;
   }
   
}


int main()
{

 cout << createurl("https://", "elzero.", "org") << "\n"; // https://www.elzero.org
 cout << createurl("https://", "google.", "com", false) << "\n"; // https://google.com
 cout << createurl("http://", "learn.", "net") << "\n"; // http://www.learn.net
 

return 0 ;
} 
