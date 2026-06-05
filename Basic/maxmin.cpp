#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {4, 12,7,5,3};
    int max = INT_MIN;
    int min = INT_MAX;
    
    for(int i = 0; i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }  
    }
    cout<<"Maximum number is "<<max<<" "<<"Minimum number is "<<min<<endl;
    return 0;
}