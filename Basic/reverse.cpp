#include <iostream>

using namespace std;
int reverse(int arr[],int size){
    cout<<"reversing array "<<endl;
    int start = 0;
    int end = size-1;
    while(start <= end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    return 0;
}