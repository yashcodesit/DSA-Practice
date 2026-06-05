#include <iostream>
#include <vector>
using namespace std;

void solve(string &s, int index)
{
  if (index == s.size())
  {
    cout << s << endl;
    return;
  }

  for (int i = index; i < s.size(); i++)
  {
    swap(s[index], s[i]);
    solve(s, index + 1);
    swap(s[index], s[i]);
  }
}

int main()
{
  string s = "abc";
  solve(s, 0);
  return 0;
}