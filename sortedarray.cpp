#include <iostream>

using namespace std;
bool sortedarray(int arr[],int size){
  if(size==0||size ==1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
  else{
    bool rest = sortedarray(arr+1,size-1);
  }
}

int main(){
  int arr[10] ={2,3,6,5,9,10,12,15,16,27}; 
  int ans = sortedarray(arr,10);
  if(ans){
    cout<<"array is sorted";
  }
  else{
    cout<<"array is not sorted";
  }
  return 0;
}