#include <iostream>

using namespace std;
bool binarysearch(int arr[],int size,int target){
  if(size == 0){
    return false;
  }
  int mid = size/2;
  if(arr[mid] == target){
    return true;
  }
  if(arr[mid]>target){
    return binarysearch(arr,mid,target);
  }
  return binarysearch(arr+mid+1,size-mid-1,target);
}
int main(){
  int arr[] = {2,4,6,8,10,12,14,16};
  int target = 10;
  int ans = binarysearch(arr,8,target);
  if(ans){
    cout<<"element found";
  }
  else{
    cout<<"element not found";
  }
  return 0;
}