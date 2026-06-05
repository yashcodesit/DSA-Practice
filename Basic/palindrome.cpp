#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s = "yashhsay";
  string temp = s;
  int len = s.size();
  int st = 0;
  int e = len - 1;
  if (len < 1)
  {
    cout<<"true 0 length";
  }
  s.erase(remove(s.begin(), s.end(), ':'), s.end());
  while (st <= e)
  {
    swap(s[st++], s[e--]);
  }
  if (s == temp)
  {
    cout<<"true palindorme";
  }
  else
  {
    cout<<"false";
  }
  return 0;
}
