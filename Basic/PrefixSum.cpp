#include <iostream>
#include <vector>

using namespace std;
int main(){
  vector<int> nums = {2,4,3,5,6,1};
  vector<int> prefixSum(nums.size());
  prefixSum[0] = nums[0];
  for(int i = 1; i < nums.size();i++){
    prefixSum[i] = prefixSum[i-1]+nums[i];
  }
  int l = 2;
  int r = 5;
  int sum;
  if(l == 0)
        sum = prefixSum[r];
    else
        sum = prefixSum[r] - prefixSum[l-1];

    cout << "Sum = " << sum;
  return 0;
}