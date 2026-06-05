#include <iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
  int m;
  cout<<"Enter index from where you want array to reverse ";
  cin>>m;
  int s = m+1;
  int e = arr.size()-1;
  while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  for(int i:arr){
    cout<<i<<" ";
  }
  return 0;
}