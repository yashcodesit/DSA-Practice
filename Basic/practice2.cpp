#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
  vector<int> nums1 = {1, 2, 2, 1};
  // vector<int> nums2 = {2, 2};
  // map<int, int> mp1;
  // map<int, int> mp2;
  // for (int i : nums1)
  // {
  //   mp1[i]++;
  // }
  // for (int i : nums2)
  // {
  //   mp2[i]++;
  // }
  // for(auto it : mp1){
  //   cout<<it.first<<" -> "<<it.second<<endl;
  // }
  int product = 1;
  for(int i = 0; i<nums1.size();i++){
    product = product*nums1[i];
  }
  cout<<product;
  return 0;
}