#include <iostream>

using namespace std;
bool checkPrime(int num)
{
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0){
      return false;
    }
  }
  return true;
}
int main()
{
  int num;
  cout << "Enter number " << endl;
  cin >> num;
  if (checkPrime(num))
  {
    cout << "Numer is prime" << endl;
  }
  else
  {
    cout << "Number is not prime" << endl;
  }
  return 0;
}