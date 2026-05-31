#include <iostream>

using namespace std;
int partiton(int arr[],int s, int e){
  int pivot = arr[s];
  int count = 0;
  for(int i = s+1; i<=e;i++){
    if(arr[i]<pivot)
      count++;
  }
  int realIndex = s+count;
  swap(arr[s],arr[realIndex]);

  int i = s,j = e;
  while(i<realIndex&&j>realIndex){
    while(arr[i]<arr[realIndex]){
      i++;
    }
    while(arr[j]>arr[realIndex]){
      j--;
    }
    if(arr[i]>arr[realIndex]&&arr[j]<arr[realIndex]){
      swap(arr[i++],arr[j--]);
    }
  }
  return realIndex;
}
void quicksort(int arr[],int s,int e){
  if(s>=e){
    return;
  }
  int p = partiton(arr,s,e);
  quicksort(arr,s,p-1);
  quicksort(arr,p+1,e);
}
int main(){
  int arr[15] = {2,3,6,26,74,1,85,9,10,4,9,9,9,9,3};
  int n= 15;
  quicksort(arr,0,n-1);
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}