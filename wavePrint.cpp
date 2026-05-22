#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<vector<int>> arr = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};
  for (int column = 0; column < arr.size(); column++)
  {
    if (column%2==1)
    {
      for (int row = arr.size() - 1; row >= 0; row--)
      {
        cout << arr[row][column] << " ";
      }
    }
    else
    {
      for (int row = 0; row < arr.size(); row++)
      {
        cout << arr[row][column] << " ";
      }
    }
  }

  return 0;
}