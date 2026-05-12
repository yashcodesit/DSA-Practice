#include <iostream>

using namespace std;
void swap(int arr[],int size){
    for(int i = 0; i<size-1;i = i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    swap(arr,5);
    return 0;
}