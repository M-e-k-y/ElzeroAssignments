#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std ;

int main()
{

vector<int> numbers = { 10, 20, 30, 40 };

vector<int>::iterator fnum = numbers.begin() ;
// vector<int>::iterator lnum = numbers.end() ;

cout << *fnum << "\n" ;
cout << *numbers.begin() << "\n" ;
cout << numbers.at(0) << "\n" ;
cout << numbers[0]<< "\n" ;
cout << ".__.__.\n" ;
cout << numbers[numbers.size() -1] << "\n" ;
cout << numbers.at(numbers.size() -1) << "\n" ;
cout << *(numbers.end() - 1) << "\n" ;
cout << numbers.back() << "\n" ;






return 0 ;
}