#include <iostream>
#include <stack>
using namespace std;
int main()
{
  string s = "abbaca";
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    if (!st.empty() && st.top() == s[i])
    {
      st.pop();
    }
    else
    {
      st.push(s[i]);
    }
  }
  stack<char> temp = st;

  while (!temp.empty())
  {
    cout << temp.top() << " ";
    temp.pop();
  }

  cout << endl;
  return 0;
}