 #include <iostream>
using namespace std;

// Your Function Here
int calculation(int x , int y = 50 , int z = 150)
{
    return x + y + z ;
}
int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
}