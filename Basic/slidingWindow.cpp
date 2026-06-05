#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> &arr, int k)
{
  int n = arr.size();
  int windowSum = 0;
  for (int i = 0; i < k; i++)
  {
    windowSum += arr[i];
  }
  int maxSum = windowSum;
  for (int i = k; i < n; i++)
  {
    windowSum -= arr[i - k];
    windowSum += arr[i];
    maxSum = max(maxSum, windowSum);
  }
}
int main() {

    vector<int> arr = {2,1,5,1,3,2};
    int k = 3;
    cout << "Maximum Sum = "<< maxSumSubarray(arr, k);
    return 0;
}