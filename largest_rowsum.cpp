#include <iostream>

using namespace std;
int main(){
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int sum[3] = {0};
  for(int i = 0; i < 3; i++){
    for(int j = 0; j< 3;j++){
      sum[i] +=arr[i][j];
    }
  }
  int max = 0;
  for(int i = 0; i<3;i++){
    if(sum[i]>max){
      max = sum[i];
    }
  }
  cout<<"Largest row sum is "<< max<<endl;
  return 0;
}