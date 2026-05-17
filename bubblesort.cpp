#include <iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {1,10,2,34,5,9};
  for (int i = 0; i < arr.size()-1; i++)
  {
    for(int j = 0;j<arr.size()-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  for (auto i : arr)
  {
    cout << i << endl;
  }
  
  return 0;
}