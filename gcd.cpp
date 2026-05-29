#include <iostream>

using namespace std;
int gcd(int a, int b)
{
  if (a == 0)
  {
    return b;
  }
  if (b == 0)
  {
    return a;
  }
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    if (b > a)
    {
      b = b - a;
    }
  }
}
int main()
{
  int x, y;
  cout << "Enter number " << endl;
  cin >> x >> y;
  cout << "GCD of two num is " << gcd(x, y);
  return 0;
}