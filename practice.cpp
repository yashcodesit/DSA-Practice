

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> nums = {-1};
  int k = 2;
  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
  for(int i:nums){
    cout<<i<<" ";
  }
  return 0;
}
