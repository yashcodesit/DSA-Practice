#include <iostream>

using namespace std;
// insertion sort
int sortarr(int arr[],int size){
    for(int i = 0; i < 5; i++){
        for(int j = i+1;j < 5; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    return arr[size];
}
int main(){
    int size = 5;
    int arr[5]={1,4,3,2,6};
    sortarr(arr,size);
    for(int i = 0; i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}