#include <iostream>

using namespace std;
bool linearsearch(int arr[],int size,int target){
  if(size == 0){
    return false;
  }
  if(arr[0]==target){
    return true;
  }
  return linearsearch(arr+1,size-1,target);
}
int main(){
  int arr[] = {2,3,1,5,6,56,23,113,10,11};
  int target = 1;
  int ans = linearsearch(arr,10,target);
  if(ans){
    cout<<"element found";
  }
  else{
    cout<<"element not found";
  }
  return 0;
}